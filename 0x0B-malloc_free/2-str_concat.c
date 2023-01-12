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

	while (i < size1)
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		ret[i + size1] = s2[i];
		i++;
	}
	ret[size1 + size2] = '/0';
	return (ret);
}
