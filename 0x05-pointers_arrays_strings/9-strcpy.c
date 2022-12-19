#include "main.h"

/**
 * _strcpy - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @dest : String pointer destination
 * @src : String pointer source
 * Return : return destation pointer
 */
char *_strcpy(char *dest, char *src)
{
	int siz = 0;

	while (src[siz] != '\0')
	{
		dest[siz] = src[siz];
		siz++;
	}
	dest[siz] = src[siz];
	return dest;
}
