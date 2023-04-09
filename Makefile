CC = g++
CFLAGS = -c -Wall
LFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

# Définition des fichiers
SOURCES = SFML2.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = SFML

# Règles
all: $(SOURCES) $(EXECUTABLE)
    
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LFLAGS)
	
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
