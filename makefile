CC=gcc

lab1: lab1.o main.o
	$(CC) -o explode lab1.o main.o

lab1.o: lab1.c lab1.h
	$(CC) -c lab1.c

main.o: main.c lab1.h
	$(CC) -c main.c

clean:
	-rm -f *.o lab1
	echo "All clean!"
