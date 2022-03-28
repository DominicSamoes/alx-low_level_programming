/*
 *File: 0-memset.c
 *File: 104-print_buffer.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: memory area.
 * @b: buffer.
 * @n: number of bytes.
 * @s: buffer size.
 *
 * Return: The pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	unsigned char *mem = s, val = b;

	while (i < n)
	{
		mem[i] = val;
		i++;
	}

	return (mem);
}
