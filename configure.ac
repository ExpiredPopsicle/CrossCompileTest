AC_PREREQ([2.69])
AC_INIT(crosscompiletest, 1.0, expiredpopsicle@gmail.com)
AC_CONFIG_MACRO_DIRS([m4])
AC_CONFIG_SRCDIR([src/generated.h])
AM_INIT_AUTOMAKE


# This stuff is important.
AC_CANONICAL_BUILD
AC_CANONICAL_HOST

# This comes from the m4 file we downloaded.
AX_CC_FOR_BUILD

AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT(src/Makefile src/generator/Makefile)

# Hey, you know how autoconf is just a bunch of macros used to
# generate a shell script? Well, we can also just put shell script
# code in here too.
echo ""
echo "----------------------------------------------------------------------"
echo "  ExpiredPopsicle's cross-compile sanity check time"
echo "----------------------------------------------------------------------"
echo "  CC for build: $CC_FOR_BUILD"
echo "  CC for host:  $CC"
echo "  host:         $host"
echo "  host_cpu:     $host_cpu"
echo "  host_os:      $host_os"
echo "  build:        $build"
echo "  build_cpu:    $build_cpu"
echo "  build_os:     $build_os"
echo "  prefix:       $prefix"
echo "  ac_builddir:  $ac_builddir"
echo "  ac_srcdir:    $ac_srcdir"
echo "  abs_builddir: $abs_builddir"
echo "  abs_srcdir:   $abs_srcdir"
echo "  srcdir:       $srcdir"
echo "  builddir:     $builddir"
echo "  top_builddir: $top_builddir"
echo "  ac_pwd:       $ac_pwd"
echo ""

