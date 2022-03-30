/*
 *File: 100-is_palindrome.c 
 *Auth: Dominic Samo
 */

#include "main.h"

/**
 * _str_recur - returns length of the string.
 *
 * @s: string.
 *
 * Return: length of string.
 */
int _str_recur(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recur(s + 1));
}

/**
 * comp - compares each character of the string.
 *
 * @s: string.
 * @a: smallest iterator.
 * @b: biggest iterator.
 *
 * Return: 1 if pali else 0.
 */
int comp(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + comp(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks whether string is a palindrome or not.
 *
 * @s: string.
 *
 * Return: 1 if palindrome else 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recur(s) - 1);
}
