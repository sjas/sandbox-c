# Makefile

CFLAGS=-Wall

ex01: Makefile ex01.c
	gcc ${CFLAGS} ex01.c -o ex01
	./ex01

ex02: Makefile ex02.c
	gcc ${CFLAGS} ex02.c -o ex02
	./ex02

sizeof: Makefile sizeof.c
	gcc ${CFLAGS} sizeof.c -o sizeof
	./sizeof

task201: Makefile task201.c
	gcc ${CFLAGS} task201.c -o task201
	./task201

task202: Makefile task202.c
	gcc ${CFLAGS} task202.c -o task202
	./task202

eof: Makefile eof.c
	gcc ${CFLAGS} eof.c -o eof
	./eof
