#include "main.h"

/**
 * in - that gets the length of a prefix substring
 * @c: the pointer for the string
 * @accept: the pointer containing the bytes
 *
 * Return: If c in accept
 */
char in(char c, char *accept)
{
	unsigned int i;

	i = 0;
	while (accept[i] != '\0')
	{
		if (c == accept[i])
		{
			return (1);
		}
		i++;
	}

	return (0);
}


/**
 * _strspn - that gets the length of a prefix substring
 * @s: the pointer for the string
 * @accept: the pointer containing the bytes
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from
 * accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (in(s[i], accept))
	{
		i++;
	}
	return (i);
}
