CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo2_1

exemplo2_1: exemplo2_1.c
	gcc $(CFLAGS) exemplo2_1.c -o exemplo2_1 $(LDFLAGS)

clean:
	rm -f exemplo2_1