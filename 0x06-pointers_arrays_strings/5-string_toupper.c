/*
 *File: 5-string_toupper.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * string_toupper - Lowercase string to uppercase.
 *
 * @str: pointer to string.
 *
 * Return: str.
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 97) && (*(str + count) <= 122))
			*(str + count) = *(str + count) - 32;

		count++;
	}

	return (str);
}
