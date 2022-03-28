/*
 *File: 3-strspn.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _strspn - gets length of a prefix substring.
 *
 * @s: string.
 * @accept: accepted bytes.
 *
 * Return: The number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, l;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		l = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				l = 0;
				break;
			}
		}
		if (l == 1)
			break;
	}

	return (i);
}
