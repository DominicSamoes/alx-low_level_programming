/*
 *File: 4-pow_recursion.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _pow_recursion - find length of string.
 *
 * @x: integer.
 * @y: power.
 *
 * Return: value of x^y else -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
