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
	if(argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	int n = 0,m = 0;

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	if((n == 0) && !(argv[1][0] == '0'))
	{
		printf("Error\n");
		return (1);
	}
	if((m == 0) && !(argv[2][0] == '0'))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", n+m);

	return (0);
}
