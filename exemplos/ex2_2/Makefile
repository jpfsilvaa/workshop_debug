CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo2_2

exemplo2_2: exemplo2_2.c
	gcc $(CFLAGS) exemplo2_2.c -o exemplo2_2 $(LDFLAGS)

clean:
	rm -f exemplo2_2