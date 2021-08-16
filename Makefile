.PHONY: compile clean

CC=gcc
CFLAGS=-Wall -Werror -Wpedantic -O2
LDFLAGS=

compile:
	${CC} ${CFLAGS} -o rps src/*.c ${LDFLAGS}

clean:
	rm rps
