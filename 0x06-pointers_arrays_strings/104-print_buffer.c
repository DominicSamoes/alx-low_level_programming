/*
 *File: 104-print_buffer.c
 *Auth: Dominic Samo
 */

#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer.
 *
 * @b: buffer.
 * @size: buffer size.
 */
void print_buffer(char *b, int size)
{
	int i, k, l;

	if (size <= 0)
	{
		printf("\n");
	}

	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", j);
			for (k = i; k < i + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf("  ");
			for (l = i; l < i + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
