#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t s, i;
	list_t* iter;
	iter = h;

	for (s = 0; iter != ((void *) 0); iter = iter->next)
	{
		s++;
		if (iter->len > 0 && (iter->str != ((void *)0)))
		{
			_putchar('[');
			_putuint(iter->len);
			_putchar(']');
			_putchar(' ');
			_putstrlen(iter->str, iter->len);
		}
		else
		{
			_putstr("[0] (nil)");
		}
		if (iter->next != ((void *) 0))
		{
			_putchar('\n');
		}
	}
	return s;
}
