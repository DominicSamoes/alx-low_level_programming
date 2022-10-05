/*
 * Auth: Dominic Samo
 */

#include <stdio.h>

/**
 *main - All natural numbers that are multiples of 3
 *	and 5 below 1024 (ecluded).
 *
 *Return: 0 always.
 */
int main(void)
{
	int counter, sum = 0;

	for (counter = 0; counter < 1024; counter++)
	{
		if ((counter % 3) == 0 || (counter % 5) == 0)
			sum += counter;
	}
	printf("%d\n", sum);
	return (0);
}
