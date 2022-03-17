/*
 * File: 3-print_numbers.c
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
			_putchar(i);
		}
	}
}
