# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -g -fprofile-arcs -ftest-coverage

# Arquivos
SRC = velha.cpp
HDR = velha.hpp
TEST = testa_velha.cpp
BIN = testa_velha
OBJ = velha.o testa_velha.o

# Executa tudo: compila e roda os testes
all: $(BIN)
	./$(BIN)

# Compila apenas
compile: $(BIN)

# Compilação final
$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Objetos
velha.o: velha.cpp velha.hpp
	$(CXX) $(CXXFLAGS) -c $<

testa_velha.o: testa_velha.cpp velha.hpp lib/catch.hpp
	$(CXX) $(CXXFLAGS) -c $<

# Executa os testes (se já compilado)
test:
	./$(BIN)

# Estilo de código com cpplint (exclui lib/)
cpplint:
	cpplint --exclude=lib/catch.hpp *.cpp *.hpp

# Verificação estática com cppcheck
cppcheck:
	cppcheck --enable=all --inconclusive --quiet .

# Geração de relatório de cobertura com gcov
gcov:
	$(CXX) $(CXXFLAGS) -c velha.cpp
	$(CXX) $(CXXFLAGS) -c testa_velha.cpp
	$(CXX) $(CXXFLAGS) -o $(BIN) velha.o testa_velha.o
	./$(BIN)
	gcov *.cpp

# Debug com gdb
debug:
	$(CXX) -g -std=c++17 -Wall -o $(BIN) $(SRC) $(TEST)
	gdb $(BIN)

# Valgrind
valgrind: $(BIN)
	valgrind --leak-check=full --track-origins=yes ./$(BIN)

# Limpa arquivos gerados
clean:
	rm -f *.o *.gc* *.out $(BIN) *.gcov