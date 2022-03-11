#include <stdio.h>

/**
 *main - Prints all the possible combinations of of two digits.
 *
 * Return: 0 always.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 99; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 9 && num2 == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
