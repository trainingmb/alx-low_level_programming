#include "lists.h"
#include <stdio.h>

/**
 * print_list - print a singly linked list
 * @h: the head of the list
 * Return: the length of the list
 */
size_t print_list(const list_t *h)
{
	size_t s;
	const list_t *iter;

	iter = h;
	for (s = 0; iter != ((void *) 0); iter = iter->next)
	{
		s++;
		if (iter->str != ((void *)0))
		{
			printf("[%d] %s", iter->len, iter->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		printf("\n");
	}
	return (s);
}

/**
 * _pow - raise u to n
 * @u: The unsigned int
 * @n: exponent
 * Return: Return output success
 */
unsigned int _pow(unsigned int u, int n)
{
	unsigned int i;

	if (n < 1)
	{
		return (1);
	}
	i = u;
	while (n > 1)
	{
		n--;
		i *= u;
	}
	return (i);
}
