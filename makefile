all: parse.c
	gcc -o parse parse.c
run: all
	./parse
