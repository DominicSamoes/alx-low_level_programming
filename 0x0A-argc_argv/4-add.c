#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_int - determines whether value is number or not
 * @c: char to be checked
 * Return: 1 if number else 0
 **/
int check_int(char *c)
{
	int count = 0, num = 0, len;

	len = strlen(c);
	while (count < len)
	{
		if (c[count] < '0' || c[count] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (c[count] - '0');
		}
		count++;
	}
	return (num);

}

/**
 * main - adds two positive numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of positive numbers else 1
 **/
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		b = check_int(argv[a]);
		if (b == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += b;
	}

	printf("%d\n", sum);

	return (0);
}
