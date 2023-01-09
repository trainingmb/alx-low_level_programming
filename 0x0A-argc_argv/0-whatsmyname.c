#include <stdio.h>
/**
 * main - Prints its name, followed by a new line
 * @argc: Argument Count
 * @argv: A pointer array of size argument count
 * Return: 0
 **/
int main(int argc, char *argv[])
{
    argc = 1 + argc - 1;
	printf("%s\n", *argv);
	return (0);
}
