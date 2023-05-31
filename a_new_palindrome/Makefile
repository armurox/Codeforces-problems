CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -pedantic

palindrome: palindrome.o funcs.o
	$(CC) -o palindrome palindrome.o funcs.o

palindrome.o: palindrome.c funcs.h
	$(CC) $(CFLAGS) -c palindrome.c

funcs.o: funcs.c funcs.h
	$(CC) $(CFLAGS) -c funcs.c

clean:
	rm -f *.o plaindrome