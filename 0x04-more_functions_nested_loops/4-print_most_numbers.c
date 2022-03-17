/*
 * File: 4-print_most_numbers.c
 * Auth: Dominic Samo
 */

#include "main.h"

/**
 * print_most_numbers - prints integers from 0 to 9 (exc. 2 and 4).
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		else
		{
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
