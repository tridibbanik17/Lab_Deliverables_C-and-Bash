all: string_utilities main2

main2: string_utilities.c main2.c
	gcc -o main2 string_utilities.c main2.c -lm

string_utilities: string_utilities.c main.c 
	gcc -o string_utilities string_utilities.c main.c -lm

clean:
	rm -f string_utilities main2
