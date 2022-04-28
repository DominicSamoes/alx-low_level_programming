#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_binary - Prints the binary representation of a number
  * @n: The number to be chnaged to binary
  *
  * Return: Nothing
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_div(n);
}

/**
  * _div - Divide
  * @n: Number
  *
  * Return: Nothing
  */
void _div(unsigned long int n)
{
	if (n < 1)
		return;

	_div(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
