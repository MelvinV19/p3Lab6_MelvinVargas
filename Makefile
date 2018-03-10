mu: Item.o Jugador.o main.o Bomba.o Normal.o Espina.o Tren.o Escenario.o Invisible.o V.o
	g++ Item.o Jugador.o main.o Bomba.o Normal.o Espina.o Tren.o Escenario.o Invisible.o V.o -o mu -lncurses

Bomba.o: Bomba.h Bomba.cpp
	g++ -c Bomba.cpp

Espina.o: Espina.h Espina.cpp Bomba.h
	g++ -c Espina.cpp

Item.o: Item.h Item.cpp
	g++ -c Item.cpp

Jugador.o: Jugador.h Jugador.cpp Item.h
	g++ -c Jugador.cpp

Normal.o: Normal.h Normal.cpp Bomba.h
	g++ -c Normal.cpp

Tren.o: Tren.h Tren.cpp Escenario.h
	g++ -c Tren.cpp

Escenario.o: Escenario.h Escenario.cpp
	g++ -c Escenario.cpp

Invisible.o: Invisible.h Invisible.cpp Escenario.h
	g++ -c Invisible.cpp

V.o: V.h V.cpp Bomba.h
	g++ -c V.cpp

main.o:  main.cpp Item.h Bomba.h Normal.h Espina.h Jugador.h Escenario.h
	g++ -c main.cpp

