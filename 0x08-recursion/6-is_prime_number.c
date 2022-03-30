/*
 *File: 6-is_prime_number.c
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * is_prime_number - checks whether input integer is prime.
 *
 * @n: integer.
 *
 * Return: 1 if prime else 0.
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (1);
	else
		return (0);
}
