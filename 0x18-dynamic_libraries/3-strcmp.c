#include "main.h"

/**
 * _strcmp - work exactly like strcmp,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @s1 : String pointer destination
 * @s2 : String pointer source
 * Return: return integer difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] && s2[j] && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
