#include "holberton.h"
#include <stdlib.h>

/*
 *File: 1-string_nconcat.c
 *Auth: Dominic Samo
 */
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int ls1, ls2, lst, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	ls = ls1 + n;

	st = malloc(lst + 1);

	if (st == NULL)
		return (NULL);

	for (i = 0; i < lst; i++)
		if (i < ls1)
			st[i] = s1[i];
		else
			st[i] = s2[i - ls1];

	st[i] = '\0';

	return (st);
}
