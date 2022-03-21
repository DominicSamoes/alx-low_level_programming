/*
 * File: 8-print_array.c
 * Author: Dominic Samo
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of ints
 *	followed by a new line.
 * @a: pointer to char.
 * @n: number of elements to be printed.
 */
void print_array(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
