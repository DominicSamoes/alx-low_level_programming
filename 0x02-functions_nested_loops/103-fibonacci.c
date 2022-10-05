ii/*
 * Auth: Dominic Samo
 */

#include <stdio.h>

/**
 *main - Prints sum of even-valued Fbonacci numbers.
 *
 *Return: 0 always.
 */
int main(void)
{
	long int fibo1 = 1, fibo2 = 2;
	long int sum = total = 0;

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
