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
	double temp = n/2;

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
		do 
		{
			if ((temp * temp) > n)
			{
				temp /= 2;
			}
			if (temp * temp < n)
			{
				temp += (n - temp);
			}

		} while (((n - temp) >= .001) || (temp - n) >= .001)

		return (temp);
	}
}
