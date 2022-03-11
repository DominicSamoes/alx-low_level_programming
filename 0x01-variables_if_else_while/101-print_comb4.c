#include <stdio.h>

/**
 *main - Prints all the possible combinations of  three digits.
 *
 * Return: 0 always.
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 == 8 && num2 == 9)
					break;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
