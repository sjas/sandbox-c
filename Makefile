# Makefile

CFLAGS=-Wall -Wextra

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

task203: Makefile task203.c
	gcc ${CFLAGS} task203.c -o task203
	./task203

optest: Makefile operator-test.c
	gcc ${CFLAGS} operator-test.c -o operator-test
	./operator-test

task204: Makefile task204.c
	gcc ${CFLAGS} task204.c -o task204
	cat task204-test.txt | ./task204

task205: Makefile task205.c
	gcc ${CFLAGS} task205.c -o task205
	cat task205-test.txt | ./task205

ampersand: Makefile ampersand.c
	gcc ${CFLAGS} ampersand.c -o ampersand
	cat ampersand-test.txt | ./ampersand
