#include "search_algos.h"

/**
 * print_array - Search an ordered list in binary
 * @array: Pointer to the array to be printed
 * @size: The size of the array
 * Return: Void
 */
void print_array(int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d%s", array[i], i != (size - 1) ? ", " : "\n");
	}
}


/**
 * binary_search - Search an ordered list in binary
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int result = 0, middle = size / 2;

	if (array == NULL || size < 1)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);
	if (size < 2)
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	if (array[middle] > value)
		return (binary_search(array, middle, value));
	result = binary_search(&(array[middle]), size - middle, value);
	if (result == -1)
		return (-1);
	return (result + middle);
}

