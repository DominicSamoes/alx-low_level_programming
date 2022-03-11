#include <stdio.h>

/**
 *main - Prints alphabet in lowercase and in reverse.
 *
 * Return: 0 always.
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet <= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
