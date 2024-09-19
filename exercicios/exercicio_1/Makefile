CFLAGS = -std=c99 -Wall -Werror -Wvla -g
LDFLAGS = -lm

.PHONY: all clean

all: padaria

exemplo_1_4: padaria.c
	gcc $(CFLAGS) padaria.c -o padaria $(LDFLAGS)

clean:
	rm -f padaria
