#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: pointer to first string.
 * @src: pointer to second string.
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b >= 0)
	{
		*(a + b) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}

	return (dest);
}
