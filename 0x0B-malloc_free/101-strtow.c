#include <stdlib.h>
/**
 * sss - ss
 * @str: argument count
 * Return: string
 **/
char *sss(char *str)
{
	int i, size;
	char *ret;

	size = 0;
	for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
	{
		size++;
	}
	ret = malloc(sizeof(char) * (size + 1));
	if (ret == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ret[i] = str[i];
	}
	ret[size] = '\0';
	return (ret);
}
/**
 * countstr - count strings
 * @s: string
 * Return: count of stringd
 **/
int countstr(char *s)
{
	int no, i;

	no = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			no++;
			while (s[i] == ' ')
			{
				i++;
			}
		}
	}
	if (i > 0 && s[i - 1] != ' ')
	{
		no++;
	}
	return (no);
}

/**
 * **strtow - concatenates all the arguments of your program
 * @str: argument count
 * Return: array of strings
 **/
char **strtow(char *str)
{
	int no, i, k;
	char **ret;

	no = 0;
	k = 0;
	i = -1;
	while (str[++i] == ' ')
		i = i;
	no = countstr(&str[i]);
	if (no == 0)
		return (NULL);
	ret = malloc(sizeof(char *) * (no + 1));
	if (ret == NULL)
		return (NULL);
	for (i = i; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			while (str[i] == ' ' && str[i] != '\0')
				i++;
			i--;
		}
		else
		{
			ret[k] = sss(&str[i]);
			if (ret[k] == NULL)
			{
				while (k >= 0)
					free(ret[k--]);
				free(ret);
				return (NULL);
			}
			k++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			i--;
		}
	}
	ret[no] = '\0';
	return (ret);
}
