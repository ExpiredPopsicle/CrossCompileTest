AM_CFLAGS = -g -Wall
AM_LDFLAGS = -g -Wall
bin_PROGRAMS = crosscompiletest
BUILT_SOURCES = generated.c
CLEANFILES = generated.c
crosscompiletest_SOURCES = main.c generated.c

SUBDIRS = generator

generator/generator_tool :
	$(MAKE) -C generator generator_tool

generated.c : generator/generator_tool$(EXEEXT_FOR_BUILD)
	generator/generator_tool$(EXEEXT_FOR_BUILD)
