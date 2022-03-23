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
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}

	return (str);
}
