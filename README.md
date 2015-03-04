Makefiles: A light introduction
===============================

These folders contain various examples of Makefiles and different
syntax to accomplish the same task.  They're broken down as follows:

* Part0:
  This is the plain source that we're trying to compile.  It consists
  of a simple program (test.c) with a single dependant object (util.c)
  and a globally include header (util.h)

* Part1:
  This is the same source with a simple, very explicit Makefile.
  Every rule is defined and nothing should happen implicitly except
  the dependency generation.

* Part2:
  This is the same source with two key differences: a lot of the
  references have been replaced with variables and the object
  compilation is now implicitly parsed.

* Part3:
  This is the same source but now make figures out all of the
  dependencies and how to build the project.
