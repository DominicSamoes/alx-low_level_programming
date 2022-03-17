/*
 * File: 7-print_diagonal.c
 * Auth: Dominic Samo
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: number of times \ will be printed
 *
 */
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');
			_putchar('\\');

			if (i == n -1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
