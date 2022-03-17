/*
 * File: 10-print_triangle.c
 * Auth: Dominic Samo
 */

#include "main.h"

/**
 * print_triangle - draws a triangle.
 * @size: number of times # will be printed
 *
 */
void print_triangle(int size)
{
	int i, index;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (index = size - i; index > 0; index--)
				_putchar(' ');

			for (index = 0; index < h; index++)
				_putchar('#');

			if (i == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
