#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 * @str: the string to copy
 *
 * Return: string copy or null
 */
char *_strdup(char *str)
{
	char *ret;
	int size;

	size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size++] != '\0')
	{
		;
	}

	ret = malloc(sizeof(char) * size);

	if (ret == NULL)
		return (NULL);

	size--;
	while (size > 0)
	{
		ret[size] = str[size];
		size--;
	}
	ret[size] = str[size];
	return (ret);
}
