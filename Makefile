.PHONY: compile clean

CC=gcc
CFLAGS=-std=c99 -Wall -Werror -Wextra -Wpedantic -O2
LDFLAGS=

compile:
	${CC} ${CFLAGS} -o rps src/*.c ${LDFLAGS}

clean:
	rm rps
