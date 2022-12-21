#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str : String pointer
 * Return: String pointer
 */
char *leet(char *str)
{
	int i = 0, j = 0;
	char ef[11] = "aAeEoOtTlL";
	char fe[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (j < 11)
		{
			if (str[i] == ef[j])
			{
				str[i] = fe[j / 2];
			}
			j++;
		}
	}
	return (str);
}
