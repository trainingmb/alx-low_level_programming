#include <stdlib.h>

/**
 * create_array - Create array of size size and
 * filled with c
 * @size: the size of the memory
 * @c: fill character
 *
 * Return: created array or null
 */
char *create_array(unsigned int size, char c)
{
	char *ret;

	if (size == 0)
		return (NULL);

	ret = malloc(sizeof(char) * size);

	if (ret == NULL)
		return (NULL);

	size--;
	while (size > 0)
	{
		ret[size] = c;
		size--;
	}
	ret[size] = c;
	return (ret);
}
