/*
 *File: 5-sqrt_recursion.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _sqrt_recursion - naturl square root of a number.
 *
 * @n: integer.
 *
 * Return: value of x^(1/2) else -1 if y < 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n / _sqrt_recursion(n - 1));
	}
}
