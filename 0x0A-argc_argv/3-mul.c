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
	int n, m;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	printf("%d\n", n * m);

	return (0);
}
