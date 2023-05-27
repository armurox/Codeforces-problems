CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -pedantic

puzzle: puzzle.o funcs.o
	$(CC) -o puzzle puzzle.o funcs.o

puzzle.o: puzzle.c funcs.h
	$(CC) $(CFLAGS) -c puzzle.c

funcs.o: funcs.c funcs.h
	$(CC) $(CFLAGS) -c funcs.c

clean:
	rm -f *.o puzzle
	