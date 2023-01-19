#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 * @array: elements on which the function acts on
 * @size: is the size of the array
 * @cmp: is a pointer to the function to be used
 * to compare values
 * Return: the index of the first element
 * for which the cmp function does not return 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != ((void *) 0) && array != ((void *) 0))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	
	return (-1);
}
