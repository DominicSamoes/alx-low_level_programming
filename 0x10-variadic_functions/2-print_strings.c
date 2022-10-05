/*
 *File: 2-print_strings.c
 *Auth: Dominic Samo
 */
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to be printed.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *st;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(list, char *);

		if (st)
			printf("%s", st);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
