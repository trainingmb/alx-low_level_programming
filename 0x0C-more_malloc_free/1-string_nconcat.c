#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: maximum len of s2 to copy
 * Return: pointer to the allocated memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ss1, ss2, i;
	char *ret;

	i = 0;
	ss1 = 0;
	if (s1 == NULL)
		ss1 = 0;
	else
	{
		while (s1[++ss1] != '\0')
			;
	}
	ss2 = 0;
	if (s2 == NULL)
		ss2 = 0;
	else
	{
		while (s2[++ss2] != '\0')
			;
	}
	ss2 = (ss2 > n ? n : ss2);
	ret = malloc(ss1 + ss2 + 1);
	if (ret == NULL)
	{
		return (NULL);
	}
	while (i < ss1)
	{
		ret[i] = s1[i++];
	}
	while ((i - ss1) < ss2)
	{
		ret[i] = s2[(i++ - ss1)];
	}
	ret[ss1 + ss2] = '\0';
	return (ret);
}
