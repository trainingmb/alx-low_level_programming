#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search an ordered list in jump
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t gap = sqrt(size), i = 0, j = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += gap;
	}
	j = i;
	i -= gap;
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	while (array[i] < value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
	}
	if (array[i] == value && i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}

	return (-1);
}

