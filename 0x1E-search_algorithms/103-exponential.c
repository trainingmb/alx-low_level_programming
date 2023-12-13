#include "search_algos.h"

/**
 * _print_array - Search an ordered list in binary
 * @array: Pointer to the array to be printed
 * @size: The size of the array
 * Return: Void
 */
void _print_array(int *array, size_t size)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("%d%s", array[i], i != (size - 1) ? ", " : "\n");
	}
}

/**
 * internal_binary_search - Search an ordered list in binary
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
int internal_binary_search(int *array, size_t size, int value)
{
	size_t m = (size - 1) / 2;
	int result = 0;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	_print_array(array, size);
	if (array[m] < value)
	{
		result = (binary_search(&(array[m + 1]), size - m - 1, value));
		if (result == -1)
			return (-1);
		return (m + 1 + result);
	}
	if (array[m] > value)
		return (binary_search(array, m, value));
	if (array[m] == value)
		return (m);
	return (-1);
}

/**
 * exponential_search - Search an ordered list in exp
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right, index;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	i = i / 2;
	printf("Value found between indexes [%ld] and [%ld]\n", i, right);

	index = (internal_binary_search(&(array[i]), right - i + 1, value));
	if (index == -1)
		return (-1);
	return (index + i);
}

