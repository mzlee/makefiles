## Variables and pattern matching
# Variables are defines as <name> = <value> or as <name> := <value>
#
# The difference in the way you define variables changes some
# properties of the recursive evaluation.  This probably isn't
# important in the common case.  Variables can be respecified on the
# command line; for example, you can type:
#
# $ make CFLAGS="-O3 -g"
#
# to add -O3 to the compilation.
#
# The % in some of the rules is wildcard matching and helps reduce the
# repeated rules.  The end result of the object compilation is the
# exact same statement as in Part1

PROG = test
CC = gcc
LD = gcc
CFLAGS = -g
LDFALGS = -g
OBJS = test.o util.o
HEADERS = util.h

all: $(PROG)

$(PROG): $(OBJS) $(HEADERS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(PROG) 

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $< -c -o $@

clean:
	rm -f $(OBJS) $(PROG)
