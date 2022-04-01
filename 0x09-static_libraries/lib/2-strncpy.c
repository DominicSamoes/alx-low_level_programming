#include "main.h"

/**
 * _strncpy - Copies a string.
 *
 * @dest: pointer to first string.
 * @src: pointer to second string.
 * @n: pointer to bytes.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len_src = 0;

	while (src[i++])
		len_src++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = len_src; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
