/*
 * File: 100-atoi.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * _atoi - Convert a string to an int.
 * @s: String to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int cue;

	unsigned int num = 0;

	do {
		if (*s == '-')
			cue *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);


	return (num * cue);
}
