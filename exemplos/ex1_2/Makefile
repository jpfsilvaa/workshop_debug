CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo1_2

exemplo1_2: exemplo1_2.c
	gcc $(CFLAGS) exemplo1_2.c -o exemplo1_2 $(LDFLAGS)

clean:
	rm -f exemplo1_2
