#include "main.h"

/**
 * rev_string - reverses a string
 * @s : String pointer
 */
void rev_string(char *s)
{
	int siz = 0;
	int zis = 0;
	int n = 0;
	char temp;

	while (s[siz] != '\0')
	{
		siz++;
	}
	n = siz / 2;
	siz--;
	while (zis < n)
	{
		temp = s[siz];
		s[siz] = s[zis];
		s[zis] = temp;
		siz--;
		zis++;
	}
}
