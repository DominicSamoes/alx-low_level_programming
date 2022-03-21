/*
 * File: 1-swap.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * swap_int - Swaps two integers.
 *
 * @a: First int.
 * @b: Second int.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
