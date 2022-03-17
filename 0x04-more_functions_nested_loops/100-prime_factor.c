/*
 * File: 100-prime_factor.c
 * Auth: Dominic Samo
 */

#include <stdio.h>

/**
 * main - Prints the largest prime factor.
 *
 * Return: 0 always.
 */
int main(void)
{
	long int n, pf;

	n = 612852475143;

	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}

	printf("%lu\n", pf);

	return (0);
}
