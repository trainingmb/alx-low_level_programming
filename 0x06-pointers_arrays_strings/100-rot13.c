#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str : String to rotate
 * Return: Return rotated string
 */
char *rot13(char *str)
{
	int i = 0;
	char chg;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			chg = ((str[i] >= 'a' && str[i] <= 'z') * 'a') +
					((str[i] >= 'A' && str[i] <= 'Z') * 'A');
			str[i] = ((str[i] - chg + 13) % 26) + chg;
		}
	}
	return (str);
}
