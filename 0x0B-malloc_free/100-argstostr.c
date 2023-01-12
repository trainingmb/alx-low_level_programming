#include <stdlib.h>
/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to strings
 * Return: one sring or null
 **/
char *argstostr(int ac, char **av)
{
	char *largeStr;
	int i, j, k, size;

	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}
	size++;

	largeStr = malloc(sizeof(char) * size);
	if (largeStr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			largeStr[k++] = av[i][j];
		}
		largeStr[k++] = '\n';
	}
	largeStr[k] = '\0';
	return (largeStr);
}
