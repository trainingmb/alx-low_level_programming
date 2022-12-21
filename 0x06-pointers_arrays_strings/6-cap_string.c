#include "main.h"

/**
 * checkStart - check space, tabulation, new line, ,, ;, ., !,
 * ?, ", (, ), {, and }
 * @l : character
 * Return: char
 */
char checkStart(char l)
{
	if (l == ' ' || l == '\n' || l == '\t')
	{
		return 1;
	}
	else if (l == ',' || l == ';' || l == '.')
	{
		return 1;
	}
	else if (l == '!' || l == '?' || l == '\"')
	{
		return 1;
	}
	else if (l == '(' || l == ')' || l == '{')
	{
		return 1;
	}
	else if (l == '}')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/**
 * cap_string - capitalizes all words of a string
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @str : String pointer
 * Return: String pointer
 */
char *cap_string(char * str)
{
	int i = 0;

	for(i = 0; str[i + 1] != '\0'; i++)
	{
		if (checkStart(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 'a' + 'A';
		}
	}
	return (str);
}
