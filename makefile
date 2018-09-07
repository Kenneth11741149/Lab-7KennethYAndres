output: main.o Real.o Racional.o Radical.o
	g++ main.o Real.o Racional.o Radical.o -o output
main.o:	main.cpp
	g++ -c main.cpp
Real.o:	Real.h Real.cpp
	g++ -c Real.cpp
Racional.o: Racional.h Racional.cpp Real.cpp
	g++ -c Racional.cpp
Radical.o: Radical.h Radical.cpp Real.cpp
	g++ -c Radical.cpp