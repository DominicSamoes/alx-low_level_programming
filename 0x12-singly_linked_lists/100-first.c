#include <stdio.h>

/**
 * beforemain - Prints a string before the
 *        main function is executed.
 */
void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
