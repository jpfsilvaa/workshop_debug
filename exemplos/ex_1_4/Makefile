CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo_1_4

exemplo_1_4: exemplo_1_4.c
	gcc $(CFLAGS) exemplo_1_4.c -o exemplo_1_4 $(LDFLAGS)

clean:
	rm -f exemplo_1_4
