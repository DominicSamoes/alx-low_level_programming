ii/*
 * Auth: Dominic Samo
 */

#include <stdio.h>

/**
 *main - Prints sum of even-valued Fbonacci numbers
 *	below 4,000,000.
 *
 *Return: 0 always.
 */
int main(void)
{
	unsigned long fibo1 = 0, fibo2 = 1, sum;
	float total;

	while (1)
	{
		sum = fibo1 + fibo2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;

		fibo1 = fibo2;
		fibo2 = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
