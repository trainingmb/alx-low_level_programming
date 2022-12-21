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
	int siz = 0;

	while (src[siz] != '\0')
	{
		dest[siz] = src[siz];
		siz++;
	}
	dest[siz] = '\0';
	return (dest);
}
