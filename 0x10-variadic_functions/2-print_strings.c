#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of ztrings passed to the function
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;
	char *current;

	if (separator == ((void *) 0))
	{
		separator = "";
	}
	if (n > 0)
	{
		va_start(numbers, n);
		current = va_arg(numbers, char *);
		if (current == ((void *) 0))
		{
			current = "(nil)";
		}
		printf("%s", current);
		for (i = 1; i < n; i++)
		{
			current = va_arg(numbers, char *);
			if (current == ((void *) 0))
			{
				current = "(nil)";
			}
			printf("%s%s", separator, current);
		}
		va_end(numbers);
	}
	printf("\n");
}
