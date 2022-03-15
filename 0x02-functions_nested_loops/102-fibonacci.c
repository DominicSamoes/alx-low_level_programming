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

	for (i = 0; i < 50; i++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
