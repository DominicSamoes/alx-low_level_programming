#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: 0 if s1 equals s2 else another number.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
