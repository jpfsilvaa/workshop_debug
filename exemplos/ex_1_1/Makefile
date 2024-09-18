CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo_1_2

exemplo_1_1: exemplo_1_2.c
	gcc $(CFLAGS) exemplo_1_2.c -o exemplo_1_2 $(LDFLAGS)

clean:
	rm -f exemplo_1_2
