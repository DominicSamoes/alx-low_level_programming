#include <stdio.h>

/**
 * int_islower - checks for lowercase characters
 *
 * return: 1 if c is lowercase otherwise 0
 */
int _islower(int c)
{
        if (c>= 'a' && c<= 'z')
		return (1);
	else
		return (0);
}
