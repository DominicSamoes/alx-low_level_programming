#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two outputs
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication else 1
 **/
int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	prod = a * b;

	printf("%d\n", prod);

	return (0);
}
