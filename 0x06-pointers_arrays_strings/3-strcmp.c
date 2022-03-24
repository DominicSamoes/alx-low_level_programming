#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 *
 * Return: 0 if s1 equals s2 else another number.
 */
char *_strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (b == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + b) == '\0'))
			break;
		b = *(s1 + a) - *(s2 + a);
		a++;
	}

	return (b);
}
