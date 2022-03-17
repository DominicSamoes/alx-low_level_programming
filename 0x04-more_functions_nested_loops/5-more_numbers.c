/*
 * File: 5-more_numbers.c
 * Auth: Dominic Samo
 */

#include "main.h"

/**
 * more_numbers - prints integers from 0 to 14.
 *
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
