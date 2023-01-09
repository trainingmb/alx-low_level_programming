#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: Argument Count
 * @argv: A pointer array of size argument count
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i++]);
	}

	return (0);
}
