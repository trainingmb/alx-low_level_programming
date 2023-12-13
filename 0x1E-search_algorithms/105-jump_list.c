#include "search_algos.h"

/**
 * jump_list - Search an ordered list in jump
 * @array: Pointer to the array to be searched
 * @size: The size of the array to be searched
 * @value: The value for which the array is searching
 * Return: The index where the value was found or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);
	step = 0;
	step_size = sqrt(size);
  jump = list;
	for (; (jump->index + 1 < size) && (jump->n < value);)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
