#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s : String pointer
 * Return: The number in the string
 */
int _atoi(char *s)
{
	int siz = 0;
	int ret = 0;
	int negcount = 0;

	while (s[siz] != '\0')
	{
		if (s[siz] == '-')
			negcount++;
		if ((s[siz] >= '0') && s[siz] <= '9')
		{
			while ((s[siz] >= '0') && s[siz] <= '9')
			{
				ret = (ret * 10) + (s[siz] - '0');
				siz++;
			}
			break;
		}
		siz++;
	}
	if (negcount % 2)
	{
		return (ret * -1);
	}
	return (ret);
}
