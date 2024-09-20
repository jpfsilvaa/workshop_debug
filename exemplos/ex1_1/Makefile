CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo1_1

exemplo1_1: exemplo1_1.c
	gcc $(CFLAGS) exemplo1_1.c -o exemplo1_1 $(LDFLAGS)

clean:
	rm -f exemplo1_1
