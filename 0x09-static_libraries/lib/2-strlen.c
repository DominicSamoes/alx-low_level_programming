/*
 * File: 2-strlen.c
 * Author: Dominic Samo
 */

#include "main.h"

/**
 * _strlen - Returns length of a string.
 *
 * @s: pointer to char.
 *
 * Return: The length of a string @s.
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
