static: main.c libcheckmem.a
	gcc -static -o util main.c -I. -L. -lcheckmem

getRate.o : getRate.c
	gcc -c -o getRate.o getRate.c

libcheckmem.a: getRate.o
	ar -rv libcheckmem.a getRate.o