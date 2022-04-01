#include <stdio.h>
#include <stdlib.h>
/**
 * main - outputs minimum of coins to make change for
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: number of coins or 1
 **/
int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount > 25)
	{
		while (amount >= 25)
			amount -= 25, coins++;
	}
	if (amount > 10 && amount < 25)
	{
		while (amount >= 10)
			amount -= 10, coins++;
	}
	if (amount > 5 && amount < 10)
	{
		while (amount >= 5)
			amount -= 5, coins++;
	}
	if (amount > 2 && amount < 5)
	{
		while (amount >= 2)
			amount -= 2, coins++;
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
	{
		coins++;
	}

	printf("%d\n", coins);


	return (0);
}
