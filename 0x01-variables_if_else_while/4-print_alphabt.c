#include <stdio.h>

/**
 *main - Prints alphabet in lowercase excluding q and e.
 *
 * Return: 0 always.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
