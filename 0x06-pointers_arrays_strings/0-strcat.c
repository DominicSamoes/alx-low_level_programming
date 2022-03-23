#include "main.h"

/**
 * _strncat - Concatenates two strings.
 *
 * @dest - pointer to first string.
 * @src - pointer to second string.
 * @n - number of bytes 
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src;
	}

	return (dest);
}
