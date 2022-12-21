#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * including the terminating null byte (\0),
 * @str : String pointer
 * Return: String pointer
 */
char *string_toupper(char * str)
{
	int siz = 0, i = 0, j = 0, ret = 0;

	for(i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] >= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (ret);
}
