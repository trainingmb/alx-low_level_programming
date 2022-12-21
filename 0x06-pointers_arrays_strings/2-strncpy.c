#include "main.h"

/**
 * _strncpy - copy two strings,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest : String pointer destination
 * @src : String pointer source
 * @n : Integer maximum no of bytes
 * Return: return destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int siz = 0, i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[siz] = src[i];
		i++;
		siz++;
	}
	if (i != n)
	{
		dest[siz] = '\0';
	}
	return (dest);
}
