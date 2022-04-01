#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: pointer to first string.
 * @src: pointer to second string.
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, len_dest = 0;

	while (dest[index++])
	{
		len_dest++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[len_dest++] = src[index];
	}

	return (dest);
}
