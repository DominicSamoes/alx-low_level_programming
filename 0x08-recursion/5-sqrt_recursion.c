/*
 *File: 5-sqrt_recursion.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * sqrt_rec - does bin search while computing sqrt.
 *
 * @st: initial integer.
 * @en: last number
 * @num: equivalent to n.
 *
 * Return: 1 if not found else return root.
 */
int sqrt_rec(int st, int en, int num)
{
	long midval;

	if (en >= st)
	{
		midval = st + (en - st) / 2;
		if (midval * midval == num)
			return (midval);
		if (midval * midval > num)
			return (sqrt_rec(st, midval - 1, num));
		if (midval * midval < num)
			return (sqrt_rec(midval + 1, en, num));
	}
	return (-1);
}

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
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_rec(2, n, n));
}
