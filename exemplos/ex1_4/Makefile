CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo1_4

fila.o: fila.c fila.h
	gcc $(CFLAGS) -c fila.c -o fila.o

exemplo1_4: exemplo1_4.c fila.o
	gcc $(CFLAGS) exemplo1_4.c fila.o -o exemplo1_4 $(LDFLAGS)

clean:
	rm -f exemplo1_4 fila.o
