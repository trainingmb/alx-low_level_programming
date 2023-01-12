#include <stdlib.h>

/**
 * str_concat - Concat 2 strings
 * @s1: the string 1
 * @s2: the string 2
 * 
 * Return: concated strings or null
 */
char *str_concat(char *s1, char *s2)
{
	char *ret;
	int size1, size2, i;

	size1 = 0;
	size2 = 0;
	i = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
		{
			size1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
		{
			size2++;
		}
	}

	ret = malloc(sizeof(char) * (size1 + size2 + 1));

	if (ret == NULL)
		return (NULL);

	size--;
	while (size > 0)
	{
		ret[size] = str[size];
		size--;
	}
	ret[size] = str[size];
	return (ret);
}
