/*
 * File: 101-keygen.c
 * Author: Dominic Samo
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for
 *	the program 101-crackme.
 *
 * Return: 0 always.
 */
int main(void)
{
	int code[500], i, sum, num;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 500; i++)
	{
		code[i] = rand() % 78;
		sum += (code[i] + '0');
		putchar(code[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}

	return (0);
}
