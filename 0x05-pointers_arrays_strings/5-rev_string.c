#include "main.h"

/**
 * rev_string - reverses a string
 * @s : String pointer
 */
void rev_string(char *s)s
{
	int siz = 0;
	int zis = 0;
	char *temp;

	while (s[siz] != '\0')
	{
		siz++;
	}
	char temp[siz];

	while (s[siz] != '\0')
	{
		temp[siz] = s[siz];
		siz++;
	}
	siz--;
	while (siz >= 0)
	{
		s[siz] = temp[zis];
		siz--;
		zis++;
	}
	del 
}
