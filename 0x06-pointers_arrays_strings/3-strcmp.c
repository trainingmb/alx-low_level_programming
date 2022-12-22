#include "main.h"

/**
 * _strcmp - work exactly like strcmp,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @s1 : String pointer destination
 * @s2 : String pointer source
 * Return: return integer difference
 */
int _strcmp (char *s1, char *s2)
{
	int i = 0, j = 0, ret = 0;

	for(i = 0; s1[i] != '\0'; i++)
	{
		if (s2[j] != '\0')
		{
			ret += s1[i] - s2[j];
			j++;
		}
	}
	return (ret);
}
