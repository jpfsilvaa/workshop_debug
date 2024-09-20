CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo1_4

exemplo1_4: exemplo1_4.c
	gcc $(CFLAGS) exemplo1_4.c -o exemplo1_4 $(LDFLAGS)

clean:
	rm -f exemplo1_4
