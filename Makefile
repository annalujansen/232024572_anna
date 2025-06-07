# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -g -fprofile-arcs -ftest-coverage -Iinclude

# Arquivos
SRC = src/velha.cpp
HDR = include/jogo/velha.hpp
TEST = testa_velha.cpp
BIN = testa_velha
OBJ = src/velha.o testa_velha.o

# Executa tudo: compila e roda os testes
all: $(BIN)
	./$(BIN)

# Compila apenas
compile: $(BIN)

# Compilação final
$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Objetos
src/velha.o: src/velha.cpp $(HDR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

testa_velha.o: testa_velha.cpp $(HDR) lib/catch.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Estilo de código com cpplint (exclui lib/)
cpplint:
	cpplint --exclude=lib/catch.hpp src/*.cpp include/**/*.hpp testa_velha.cpp

# Verificação estática com cppcheck
cppcheck:
	cppcheck --enable=warning --quiet --force -Iinclude -Isrc src/*.cpp testa_velha.cpp

# Geração de relatório de cobertura com gcov
gcov:
	$(CXX) $(CXXFLAGS) -c src/velha.cpp -o src/velha.o
	$(CXX) $(CXXFLAGS) -c testa_velha.cpp -o testa_velha.o
	$(CXX) $(CXXFLAGS) -o $(BIN) src/velha.o testa_velha.o
	./$(BIN)
	gcov src/*.cpp testa_velha.cpp

# Debug com gdb
debug:
	$(CXX) $(CXXFLAGS) -o $(BIN) $(SRC) $(TEST)
	gdb $(BIN)
	
# Valgrind
valgrind: $(BIN)
	valgrind --leak-check=full --track-origins=yes ./$(BIN)

# Limpa arquivos gerados
clean:
	rm -f src/*.o *.o *.gc* *.out $(BIN) *.gcov

# Gera documentação com o Doxygen
doc:
	doxygen Doxyfile