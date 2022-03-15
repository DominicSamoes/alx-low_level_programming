#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10.
 */
void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	counter = 0;

	while (counter < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	}
	_putchar('\n');
	counter++;
}
