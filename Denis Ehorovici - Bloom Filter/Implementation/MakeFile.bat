CC=gcc

# -c = compilation
# -Wall = throws all warnings
CFLAGS=-c -Wall

all: run

run: main.o bloomFilter.o hashes.o menuUtilities.o
	$(CC) main.o bloomFilter.o hashes.o menuUtilities.o -o run

main.o: main.c
	$(CC) $(CFLAGS) main.c

bloomFilter.o: bloomFilter.c
	$(CC) $(CFLAGS) bloomFilter.c

hashes.o: hashes.c
	$(CC) $(CFLAGS) hashes.c

menuUtilities.o: menuUtilities.c
	$(CC) $(CFLAGS) menuUtilities.c

clean:
	rm *o run
