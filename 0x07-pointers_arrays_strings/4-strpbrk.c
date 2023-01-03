#include <stdio.h>

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
 * _strpbrk - locates the first occurrence in
 * the string s of any of the bytes in the string
 * @s: the pointer for the string
 * @accept: the pointer containing the bytes
 *
 * Return: a pointer to the byte in s that
 * matches one of the bytes in accept, or
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (in(s[i], accept))
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
