/*
 * File: 4-print_rev.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: pointer to char.
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
