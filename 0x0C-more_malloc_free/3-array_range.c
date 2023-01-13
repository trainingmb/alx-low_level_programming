#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value included
 * @max: maximum value included
 * Return: pointer to the allocated memory or NULL
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *ret;
	int j;

	j = 0;
	if (min > max)
	{
		return (NULL);
	}
	ret = malloc((max - min) + 1);
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++, j++)
	{
		ret[j] = i;
	}
	return (ret);
}
