## Implicit rules
# Certain requirements are implicitly interpreted.  In this example,
# almost the entire compilation is implicit
#
# By default, make understands requests to compile certain files.  At
# a minimum, it distinguishes .c and .cpp files.  The implicit
# definitions automatically expands certain variables.  For example, a
# c compilation might look like the following
#
# %.o: %.c
# 	$(CC) -c   $(CFLAGS) $(CPPFLAGS) $< -o $@
#
# That is, it compiles a c file into an object including both the
# CFLAGS and the CPPFLAGS (c preprocessor flags) as well as the name
# of the source file and writes it out as an object.

PROG = test
CC = gcc
LD = gcc
CFLAGS = -g
LDFLAGS = -g
OBJS = test.o util.o

all: $(PROG)
$(PROG): $(OBJS)

clean:
	rm -f $(OBJS) $(PROG)
