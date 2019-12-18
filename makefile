all: isort txtfind
isort:isort.o mainsort.o  
	gcc -Wall -o all isort.o main.o 
mainsort.o: main.c isort.h
	gcc -Wall -c main.c
isort.o: isort.c isort.h
	gcc -Wall -c isort.c

txtfind: txtfind.o mainFind.o
	gcc -Wall -o all txtfind.o mainFind.o
mainFind.o:mainFind.c txtfind.h
	gcc -Wall -c mainFind.c	
txtfind.o: txtfind.c txtfind.h
	gcc -Wall -c txtfind.c
.PHONY: clean all
clean:
	rm -f *.o all
	