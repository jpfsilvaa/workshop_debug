CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: exemplo_1_4

exemplo_1_3: exemplo_1_3.c
	gcc $(CFLAGS) exemplo_1_3.c -o exemplo_1_3 $(LDFLAGS)

clean:
	rm -f exemplo_1_3
