CPP=g++
LD=g++


CPPFLAGS=-std=c++14
LDFLAGS=-std=c++14
LIBS=-lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio
EXES= acceuil

all: $(EXES)

acceuil: main.o Acceuil.o 
	$(LD) $(LDFLAGS) main.o Acceuil.o -o acceuil $(LIBS)


main.o : main.cpp Acceuil.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp

Acceuil.o : Acceuil.cpp
	$(CPP) $(CPPFLAGS) -c Acceuil.cpp

clean:
	rm -f *.o $(EXES)

vclean: clean
	rm -f $(EXES)
