#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Calculator program
 * @argc: Argument Count
 * @argv: A pointer array of size argument count
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int a, b, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	operation = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (operation == NULL ||
		(a == 0 && argv[1][0] != '0')
		|| (a == 0 && argv[1][0] != '0'))
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = operation(a, b);
	printf("%d\n", result);
	return (0);
}
