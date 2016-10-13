CC = gcc
CFLAGS = -Wall -ggdb

DOP: main.c string_tools.c
	$(CC) $(CFLAGS) -o a.out -std="c99" main.c string_tools.c
