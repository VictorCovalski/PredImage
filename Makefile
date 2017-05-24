
CC=g++
IFTAGS=-std=c++11
all: codificador decodificador

codificador: codificador.cpp
	$(CC) $(IFTAGS) codificador.cpp -o codificador

decodificador: decodificador.cpp
	$(CC) $(IFTAGS) decodificador.cpp -o decodificador

clean:
	rm *.o
