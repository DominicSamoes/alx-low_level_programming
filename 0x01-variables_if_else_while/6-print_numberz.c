#include <stdio.h>

/**
 *main - Prints all single digit numbers of base 10 from 0 with putchar.
 *
 * Return: 0 always.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
