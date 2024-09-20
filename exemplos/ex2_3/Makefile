CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo2_3

lista.o: lista.c lista.h
	gcc $(CFLAGS) -c lista.c -o lista.o

exemplo2_3: exemplo2_3.c lista.o
	gcc $(CFLAGS) exemplo2_3.c lista.o -o exemplo2_3 $(LDFLAGS)

clean:
	rm -f exemplo2_3 lista.o