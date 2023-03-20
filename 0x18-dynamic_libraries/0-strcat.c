#include "main.h"

/**
 * _strcat - concatenates two strings,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest : String pointer destination
 * @src : String pointer source
 * Return: return destination pointer
 */
char *_strcat(char *dest, char *src)
{
	int siz = 0, i = 0;

	while (dest[siz] != '\0')
	{
		siz++;
	}
	while (src[i] != '\0')
	{
		dest[siz] = src[i];
		i++;
		siz++;
	}
	dest[siz] = '\0';
	return (dest);
}
