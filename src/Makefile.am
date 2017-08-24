AM_CFLAGS = -g -Wall
AM_LDFLAGS = -g -Wall
bin_PROGRAMS = crosscompiletest
BUILT_SOURCES = generated.c
CLEANFILES = generated.c
crosscompiletest_SOURCES = main.c generated.c

SUBDIRS = generator

# These two rules are purely here because of the way I set up the
# project (with the source code for the generator tool in its own
# directory instead of the same directory as the rest of the source),
# and probably not necessary for sane people.
generator/generator_tool :
	$(MAKE) -C generator generator_tool
generated.c : generator/generator_tool$(EXEEXT_FOR_BUILD)
	generator/generator_tool$(EXEEXT_FOR_BUILD)
