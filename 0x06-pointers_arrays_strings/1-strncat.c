#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest: pointer to first string.
 * @src: pointer to second string.
 * @n: pointer to bytes.
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, len_dest = 0;

	while (dest[index++])
	{
		len_dest++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[len_dest++] = src[index];
	}

	return (dest);
}
