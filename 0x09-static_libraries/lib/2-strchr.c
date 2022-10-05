/*
 *File: 2-strchr.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _strchr - locates character in a string.
 *
 * @s: string.
 * @c: character.
 *
 * Return: The pointer to found string.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
