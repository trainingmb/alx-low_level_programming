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
	int n = 0, m = 0, i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	while (i < argc)
	{
		m = atoi(argv[i]);
		if ((m == 0) && !(argv[i][0] == '0'))
		{
			printf("Error\n");
			return (1);
		}
		n += m;
		i++;
	}

	printf("%d\n", n);

	return (0);
}
