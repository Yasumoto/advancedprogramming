# Makefile for CPSC370
# Joe Smith
# Advanced Programming - Interterm 2010
# Erik Linstead
# Chapman University
# Code Released under GPLv2

CC=g++
CFLAGS=-c -Wall

#link libraries
LIBS=

#additional includes
INCL=-I../include

SRC=cpsc370math.cpp main.cpp

OBJECTS=$(SRC:.cpp=.o)

EXEC=assignment1

all: $(SRC) $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(INCL) $(LIBS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(INCL) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXEC)

#need this line for make

