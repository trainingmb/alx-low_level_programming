#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: size of array
 * @size: element size
 * Return: pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ret;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ret = malloc(nmemb * size);
	if ( ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ret[i] = '\0';
	}
	return ((void *) ret);
}
