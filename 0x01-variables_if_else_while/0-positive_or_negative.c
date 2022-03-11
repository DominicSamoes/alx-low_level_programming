#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns rand num to int n
 * 	  and whether n is negative, zero or positive.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		print("%d is positive\n", n);
	else if (n == 0)
		print("%d is zero\n", n);
	else if (n < 0)
		print("%d is negative\n", n);

	return (0);
}