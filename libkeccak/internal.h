/* See LICENSE file for copyright and license details. */
#ifndef LIBKECCAK_INTERNAL_H
#define LIBKECCAK_INTERNAL_H 1


/* Use built in functions and branching optimisation if available */
#ifndef __GNUC__
# define __builtin_expect(expression, expect) expression
# define __builtin_memset(dest, c, n) memset(dest, c, n)
# define __builtin_memcpy(dest, src, n) memcpy(dest, src, n)
# define __builtin_memmove(dest, src, n) memmove(dest, src, n)
#endif


#endif
