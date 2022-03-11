#include <stdio.h>

/**
 *main - Prints all the possible combinations of of two digits.
 *
 * Return: 0 always.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar(num1);
			putchar(num2;

			while (num1 != num2)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
