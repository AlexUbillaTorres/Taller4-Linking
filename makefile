CC=gcc
CFLAGS=-I.

main2: main2.c addvec.c multvec.c
	$(CC) -g -o main2 main2.c addvec.c multvec.c -I.
	

