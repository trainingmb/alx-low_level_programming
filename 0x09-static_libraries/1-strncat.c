#include "main.h"

/**
 * _strncat - concatenates two strings,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest : String pointer destination
 * @src : String pointer source
 * @n : Integer maximum no of bytes
 * Return: return destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int siz = 0, i = 0;

	while (dest[siz] != '\0')
	{
		siz++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[siz] = src[i];
		i++;
		siz++;
	}
	dest[siz] = '\0';
	return (dest);
}
