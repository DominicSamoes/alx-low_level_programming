/*
 * File: 3-puts.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * _puts - Prints a string.
 *
 * @str: pointer to char.
 */
void _puts(char *str)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
