

clean: TCP
	rm -f DieWithError.o libDieWithError.a

TCP:libDieWithError.a DieWithError.h BinMake
	gcc -static TCPEchoClient.c -o bin/TCPEchoClient -I. -L. -lDieWithError
	gcc -static TCPEchoServer1.c -o bin/TCPEchoServer1  -I. -L. -lDieWithError
	gcc -static UDPEchoClient.c -o bin/UDPEchoClient  -I. -L. -lDieWithError
	gcc -static UDPEchoServer.c -o bin/UDPEchoServer  -I. -L. -lDieWithError
	

BinMake:
	mkdir -p bin

libDieWithError.a: DieWithError.o 
	ar -rv libDieWithError.a DieWithError.o 
	

DieWithError.o : DieWithError.c
	gcc -c -o DieWithError.o DieWithError.c

