#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: something
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	else
	{
		return ((void *) s);
	}

}
