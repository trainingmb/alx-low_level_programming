#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument Count
 * @argv: A pointer array of size argument count
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int n = 0, coins = 0, i, j;
	int denoms[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if ((n == 0) && !(argv[1][0] == '0'))
	{
		printf("Error\n");
		return (1);
	}
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		j = n / denoms[i];
		coins += j;
		n -= j * denoms[i];
	}
	printf("%d\n", coins);

	return (0);
}
