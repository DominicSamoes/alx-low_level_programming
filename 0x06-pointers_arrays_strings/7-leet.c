/*
 *File: 7-leet.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * leet - Encodes a string in 1337.
 *
 * @str: pointer to string.
 *
 * Return: Encoded str.
 */
char *leet(char *str)
{
	int i = 0, j;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == leet[j] ||
					str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}

		i++;
	}

	return (str);
}
