/*
 *File: 1-memcpy.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: memory area where n bytes are to.
 * @src: memory from where n bytes are from.
 * @n: number of bytes.
 *
 * Return: The pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; )
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
