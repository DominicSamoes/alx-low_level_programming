/*
 *File: 8-print_diagsums.c
 *Auth: Dominic Samo
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals.
 *
 * @a: input pointer.
 * @size: size of matrix.
 *
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, sumL = 0, sumR = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sumL += *(a + i);

		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sumR += *(a + i);
	}
	printf("%d, %d\n", sumL, sumR);
}
