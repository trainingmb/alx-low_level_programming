#include <stdio.h>

/**
 * in - that gets the length of a prefix substring
 * @c: the pointer for the string
 * @a: the pointer to substring
 *
 * Return: If c in a
 */
char in(char *c, char *a)
{
	unsigned int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (c[i] != a[i])
		{
			return (0);
		}
		i++;
	}

	return (1);
}


/**
 * _strstr - locates the first occurrence in
 * the string s of any of the bytes in the string
 * @haystack: the pointer for the string
 * @needle: the pointer containing the bytes
 *
 * Return: a pointer to the byte in s that
 * matches one of the bytes in accept, or
 * NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (in(&haystack[i], needle))
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
