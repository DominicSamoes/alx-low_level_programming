#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: pointer to first string.
 * @src: pointer to second string.
 * @n: pointer to bytes.
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}

	while (b < n)
	{
		*(a + b) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}

	return (dest);
}
