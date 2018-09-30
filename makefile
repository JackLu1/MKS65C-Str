all : cstring.o str.o
	gcc cstring.o str.o

cstring.o : cstring.c
	gcc -c cstring.c

str.o : str.c str.h
	gcc -c str.c

run :
	./a.out

clean : 
	rm *.o
