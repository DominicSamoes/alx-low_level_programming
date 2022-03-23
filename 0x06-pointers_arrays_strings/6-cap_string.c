/*
 *File: 6-cap_string.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * cap_string - Capitalize string.
 *
 * @str: pointer to string.
 *
 * Return: str.
 */
char *cap_string(char *str)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == str[j])
			{
				str[i + 1] -= 32;
			}
		}
	}

	return (str);
}
