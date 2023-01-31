#include "lists.h"

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

/**
 * _putuint - writes a unsigned int
 * @u: The unsigned int
 * Return: Return output success
 */
int _putuint(unsigned int u)
{
	char i;
	unsigned int f;
	int n;

	i = 1;
	f = u;
	n = 1;
	while (f / 10)
	{
		f /= 10;
		n++;
	}
	while (n > 0)
	{
		f = ((int) (u / _pow(10, n - 1))) % 10;
		n--;
		i = i && _putchar(f + '0');
	}
	return (i);
}

/**
 * _putstr - writes a str
 * @str: The string
 */
void _putstr(char *str)
{
	if (str != ((void *)0))
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
}

/**
 * _putstrlen - writes a str
 * @str: The string
 * @len: the string size
 */
void _putstrlen(char *str, unsigned int len)
{
	if (str != ((void *)0))
	{
		while (len > 0)
		{
			_putchar(*str);
			str++;
			len--;
		}
	}
}
