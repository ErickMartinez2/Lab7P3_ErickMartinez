Main: Main.o Arquero.o Asesino.o Coraza.o Escuadron.o Soldado.o
	g++ Main.o Arquero.o Asesino.o Coraza.o Escuadron.o Soldado.o -o a

Main.o: Main.cpp Arquero.h Asesino.h Coraza.h Escuadron.h Soldado.h
	g++ -c Main.cpp Arquero.cpp Asesino.cpp Coraza.cpp Escuadron.cpp Soldado.cpp

Arquero.o: Arquero.h Arquero.cpp
	g++ -c Arquero.cpp

Asesino.o: Asesino.h Asesino.cpp
	g++ -c Asesino.cpp

Coraza.o: Coraza.h Coraza.cpp
	g++ -c Coraza.cpp

Escuadron.o: Escuadron.h Escuadron.cpp
	g++ -c EScuadron.cpp

Soldado.o: Soldado.h Soldado.cpp
	g++ -c Soldado.cpp
