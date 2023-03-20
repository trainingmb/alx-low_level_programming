#include <stdio.h>
#include "main.h"

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
