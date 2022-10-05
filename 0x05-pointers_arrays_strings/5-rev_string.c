/*
 * File: 5-rev_string.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: pointer to char.
 */
void rev_string(char *s)
{
	char temp;
	int len, i;

	len = 0;
	i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
