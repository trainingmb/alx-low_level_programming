#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Print triple digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	for (; i <= 99; i++)
	{
		int j = i + 1;
		for (; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
			{
				/* do nothing */
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
