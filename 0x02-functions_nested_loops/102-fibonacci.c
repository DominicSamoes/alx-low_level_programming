/*
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
	long int fibo1 = 1, fibo2 = 0;
	long int sum;

	for (i = 0; i < 48; i++)
	{
		sum = fibo1 + fibo2;
		printf(", %ld", sum);
		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("\n");
	return (0);
}
