# File: stat/makefile.gcc
#
# Makefile for the Free Software Foundations g++ compiler
#
CC=gcc
CFLAGS=-g -Wall -D__USE_FIXED_PROTOTYPES__
OBJS=stat.o ch_type.o token.o in_file.o

all: stat.out stat test.out

test.out: test.c stat
	stat test.c >test.out

# This generates a test output based on another example
# in this book.
stat.out: stat
	stat ../calc3/calc3.c >stat.out
	
	stat: $(OBJS)
		$(CC) $(CFLAGS) -o stat $(OBJS)

stat.o: stat.c token.h
	$(CC) $(CFLAGS) -c stat.c

ch_type.o: ch_type.c ch_type.h
	$(CC) $(CFLAGS) -c token.c

in_file.o: in_file.c in_file.h
	$(CC) $(CFLAGS) -c in_file.c

clean:
	rm -f stat stat.o ch_type.o token.o in_file.o
