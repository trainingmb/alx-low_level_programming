#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Print double digit
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n = '0';

		for (; n <= '9'; n++)
		{
			int m;

			for (m = n+1; m <= '9'; m++)
			{
				putchar(n);
				putchar(m);
				if (n != '9' || m != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
