/*
 *File: 4-strpbrk.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes.
 *
 * @s: string.
 * @accept: accepted bytes.
 *
 * Return: The number of accepted bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
