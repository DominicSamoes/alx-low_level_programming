i/*
 * Auth: Dominic Samo
 */

#include <stdio.h>

/**
 *main - Prints first 50 Fibonacci numbers.
 *
 *Return: 0 always.
 */
int main(void)
{
	int i;
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	unsigned long fibo1_h1, fibo1_h2, fibo2_h1, fibo2_h2;
	unsigned long h1, h2;

	for (i = 0; i <= 91; i++)
	{
		sum = fibo1 + fibo2;
		printf("%lu, ", sum);

		fibo1 = fibo2;
		fibo2 = sum;
	}
	fibo1_h1 = fibo1 / 10000000000;
	fibo2_h1 = fibo2 / 10000000000;
	fibo1_h2 = fibo1 % 10000000000;
	fibo2_h2 = fibo2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		h1 = fibo1_h1 + fibo2_h1;
		h2 = fibo1_h2 + fibo2_h2;
		if (fibo1_h2 + fibo2_h2 > 10000000000 - 1)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (i != 98)
			printf(", ");

		fibo1_h1 = fibo2_h1;
		fibo1_h2 = fibo2_h2;
		fibo2_h1 = h1;
		fibo2_h2 = h2;
	}
	printf("\n");

	return (0);
}
