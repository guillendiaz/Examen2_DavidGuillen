main: main.o Ciudadano.o Maestro.o Estudiante.o Quirk.o Emmitter.o Transformation.o Mutant.o ADTList.o LinkedList.o nodo.o
	g++ main.o Ciudadano.o Maestro.o Estudiante.o Quirk.o Emmitter.o Transformation.o Mutant.o ADTList.o LinkedList.o nodo.o -o main

main.o: main.cpp Ciudadano.h Maestro.h Estudiante.h Quirk.h Emmitter.h Transformation.h Mutant.h ADTList.h LinkedList.h nodo.h
	g++ -c main.cpp

Ciudadano.o: Ciudadano.h Ciudadano.cpp
	g++ -c Ciudadano.cpp

Maestro.o: Maestro.h Maestro.cpp
	g++ -c Maestro.cpp

Estudiante.o: Estudiante.h Estudiante.cpp
	g++ -c Estudiante.cpp

Quirk.o: Quirk.h Quirk.cpp
	g++ -c Quirk.cpp

Emmitter.o: Emmitter.h Emmitter.cpp
	g++ -c Emmitter.cpp

Transformation.o: Transformation.h Transformation.cpp
	g++ -c Transformation.cpp

Mutant.o: Mutant.h Mutant.cpp
	g++ -c Mutant.cpp

ADTList.o: ADTList.h ADTList.cpp
	g++ -c ADTList.cpp

LinkedList.o: LinkedList.h LinkedList.cpp
	g++ -c LinkedList.cpp

nodo.o: nodo.h nodo.cpp
	g++ -c nodo.cpp

clean:
	rm *.o main
