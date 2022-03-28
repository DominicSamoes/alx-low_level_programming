/*
 *File: 5-strstr.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _strstr - locates a substring.
 *
 * @haystack: string.
 * @needle: substring.
 *
 * Return: The pointer to the beginning of a located
 * 	substring. Null if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *shaystack;
	char *subneedle;

	while (*haystack != '\0')
	{
		shaystack = haystack;
		subneedle = needle;

		while (*haystack != '\0' && *subneedle != '\0' && *haystack == *subneedle)
		{
			haystack++;
			subneedle++;
		}
		if (!*subneedle)
			return (shaystack);
		haystack = shaystack + 1;
	}

	return (0);
}
