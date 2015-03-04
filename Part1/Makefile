## Explicit Rules
# Rules are defineds as <name>: <dependency ...> 
#
# make looks for the target file and decides which objects to build
# based on the relative time stamps.  If it doesn't find a file (or
# folder) it is automatically added to the list files to build.  If
# any dependency's last write time is newer than the object itself,
# then this is also included.
#
# Comments in Makefiles are specified by the hash character (#).

all: test

test: test.o util.o util.h
	gcc -g test.o util.o -o test

util.o: util.c util.h
	gcc -g util.c -c -o util.o

test.o: test.c util.h
	gcc -g test.c -c -o test.o

clean:
	rm -f test.o util.o test
