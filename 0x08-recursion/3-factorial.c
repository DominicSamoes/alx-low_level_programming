/*
 *File: 3-factorial.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * factorial - find factorial of number.
 *
 * @n: number.
 *
 * Return: factorial if there is an error -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
		else
			return (n * factorial(n - 1));
	}
}
