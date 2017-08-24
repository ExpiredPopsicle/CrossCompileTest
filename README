Cross Compile Test
==================

This is just a dumb project designed to experiment with, and
demonstrate some autotools features.

This project demonstrates...

* Compiling a code generator.

* Using that code generator to produce a .c file.

* Compiling a program using that .c file.

These aspects _work while cross-compiling_, meaning that we compile a
native (build platform) version of an executable (the code generator),
run it, and then compile another executable for the host platform
using the produced file.

configure options
-----------------

Example command lines to compile a Windows binary from Debian with
MinGW installed are:

    ./configure --host=i686-w64-mingw32
    ./configure --host=x86_64-w64-mingw32

Contact
-------

If you have any suggestions or fixes, send me an email at
expiredpopsicle@gmail.com. I'm still an autoconf/automake newbie, so
if I've done something wrong or non-conventional, let me know!
