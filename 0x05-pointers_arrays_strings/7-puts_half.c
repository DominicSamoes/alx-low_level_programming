/*
 * File: 7-puts_half.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * puts_half - Prints half a string.
 *
 * @str: pointer to char.
 */
void puts_half(char *str)
{
	int i = 0, len = 0, a;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		a = len / 2;

	else
		a = (len + 1) / 2;

	for (i = a; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
