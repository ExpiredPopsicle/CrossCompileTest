
# Remember to use $(EXEEXT_FOR_BUILD) here, or builds where Windows is
# the build platform will not work.
GENERATOR_TOOL = generator_tool$(EXEEXT_FOR_BUILD)

# Remember to use $(srcdir) here, or out-of-source-tree builds will
# not work. AM_V_GEN is just for extra verbosity, and is optional.
$(GENERATOR_TOOL) : $(srcdir)/generator.c
	$(AM_V_GEN) $(CC_FOR_BUILD) $(srcdir)/generator.c -o $(GENERATOR_TOOL)

# FIXME: What do we do if the generator tool depends on some external
# package? What if it's a complete tool requires its own entire
# configure script?

CLEANFILES = $(GENERATOR_TOOL)
