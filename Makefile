CC=clang++ -Wall -std=c++11


all: project clean

project: main.o Board.o LargeBoard.o Game.o
        $(CC) -o$@ $^

#main.o: main.cpp
#       $(CC) -c main.cpp

#Game.o: Game.cpp Game.h
#	$(CC) -c Game.cpp Game.h

#LargeBoard.o: LargeBoard.cpp LargeBoard.h
#        $(CC) -c LargeBoard.cpp LargeBoard.h


#Board.o: Board.cpp Board.h
#        $(CC) -c Board.cpp Board.h


#.PHONY: clean
#clean:
#        rm -rf *.o *.gch
