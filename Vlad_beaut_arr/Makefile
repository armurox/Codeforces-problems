CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -pedantic

beaut_arr: beaut_arr.o funcs.o
	$(CC) -o beaut_arr beaut_arr.o funcs.o

beaut_arr.o: beaut_arr.c funcs.h
	$(CC) $(CFLAGS) -c beaut_arr.c

funcs.o: funcs.c funcs.h
	$(CC) $(CFLAGS) -c funcs.c

clean:
	rm -f *.o funcs