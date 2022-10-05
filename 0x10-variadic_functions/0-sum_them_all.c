/*
 *File: 0-sum_them_all.c
 *Auth: Dominic Samo
 */
#include "variadic_functions.h"

/**
 * sum_them_all - Sum all parameters.
 * @n: number of arguments.
 *
 * Return: 0 if n = 0 else sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int counter;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (counter = 0; counter < n; counter++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
