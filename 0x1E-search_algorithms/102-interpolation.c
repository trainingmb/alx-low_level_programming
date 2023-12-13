#include "search_algos.h"

/**
 * interpolation_search - Search an ordered list in interpolation search
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right = size - 1, temp = 0;

	if (array == NULL)
		return (-1);

	for (; right >= left;)
	{
		temp = ((double)(right - left) / (array[right] - array[left]));
		temp *= (value - array[left]);
		i = left + temp;
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			return (-1);
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
