#include "search_algos.h"

/**
 * linear_search - Search an ordered list linearly
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);
	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
