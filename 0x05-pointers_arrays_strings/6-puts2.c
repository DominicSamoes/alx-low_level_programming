/*
 * File: 6-puts2.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * puts2 - Prints every char of a string.
 *
 * @str: pointer to char.
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (s[i++])
		len++;

	for (i = 0; i < len; i+= 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
