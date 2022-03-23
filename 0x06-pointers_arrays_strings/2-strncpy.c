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
	int i, j;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (j = 0; i < n; j++)
		dest[i] = '\0';

	return (dest);
}
