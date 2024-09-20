CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo1_3

exemplo1_3: exemplo1_3.c
	gcc $(CFLAGS) exemplo1_3.c -o exemplo1_3 $(LDFLAGS)

clean:
	rm -f exemplo1_3
