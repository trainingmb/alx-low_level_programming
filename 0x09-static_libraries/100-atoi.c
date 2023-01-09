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

				if (negcount % 2)
				{
					ret = (ret * 10) - (s[siz] - '0');
				}
				else
				{
					ret = (ret * 10) + (s[siz] - '0');
				}
				siz++;
			}
			break;
		}
		siz++;
	}
	return (ret);
}
