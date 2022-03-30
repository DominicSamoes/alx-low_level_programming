/*
 *File: 6-is_prime_number.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * is_prime_num - checks whether input integer is prime.
 *
 * @n: integer.
 * @i: iterator.
 *
 * Return: 1 if prime else 0.
 */
int is_prime_num(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1)
		else
			return (0);
	}
	return (0 + is_prime_num(n, i + 1));
}

/**
 * is_prime_number - checks whether input integer is prime.
 *
 * @n: integer.
 *
 * Return: 1 if prime else 0.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if ( n == 1)
		return (0);
	return (is_prime_num(n, 2));
}
