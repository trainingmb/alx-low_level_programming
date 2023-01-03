#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the memory area destination
 * @c: the search character
 *
 * Return: a pointer to the first occurrence
 * of the character c in the string s, or NULL
 * if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
