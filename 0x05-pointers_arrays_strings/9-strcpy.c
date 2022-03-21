/*
 * File: 9-strcpy.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, includin.
 *	the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: Buffer to copy string to.
 * @src: Source to copy string to.
 *
 * Return: The pointer to the string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, len;

	len = 0;

	while (src[a] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
