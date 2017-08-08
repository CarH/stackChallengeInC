CC=gcc
CFLAGS=-I.
OBJ=main.o stack.o
DEPS=stack.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
