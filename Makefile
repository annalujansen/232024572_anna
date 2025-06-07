CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -g -fprofile-arcs -ftest-coverage

all: testa_velha

testa_velha: velha.o testa_velha.o
	$(CXX) $(CXXFLAGS) -o testa_velha velha.o testa_velha.o

velha.o: velha.cpp velha.hpp
	$(CXX) $(CXXFLAGS) -c velha.cpp

testa_velha.o: testa_velha.cpp velha.hpp
	$(CXX) $(CXXFLAGS) -c testa_velha.cpp

clean:
	rm -f *.o testa_velha *.gc* *.out