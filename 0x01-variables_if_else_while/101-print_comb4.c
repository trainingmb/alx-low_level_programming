#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Print triple digit
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n = '0';

		for (; n <= '9'; n++)
		{
			int m;

			for (m = n + 1; m <= '9'; m++)
			{
				int p;

				for (p = m + 1; p <= '9'; p++)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n == '7' && m == '8' && p == '9')
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
		}
		putchar('\n');
		return (0);
}
