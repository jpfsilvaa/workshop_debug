CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: empilha_palavras

pilha.o: pilha.c pilha.h
	gcc $(CFLAGS) -c pilha.c -o pilha.o

empilha_palavras: empilha_palavras.c pilha.o
	gcc $(CFLAGS) empilha_palavras.c pilha.o -o empilha_palavras $(LDFLAGS)

clean:
	rm -f empilha_palavras pilha.o