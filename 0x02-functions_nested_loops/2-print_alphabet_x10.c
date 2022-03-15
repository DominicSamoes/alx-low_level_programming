#include <stdio.h>

/**
 * print_aphabet_x10 - Prints the alphabet in lowercase 10 times, followed by a new line
 */
void print_alphabet_x10(void)
{
        char alpha;
	int counter;

	counter = 0;

	while (counter < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
	counter++;
}
