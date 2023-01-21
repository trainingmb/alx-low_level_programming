#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == ((void *) 0))
	{
		return;
	}
	va_start(numbers, n);
	if (n > 0)
	{
		printf("%d", va_arg(numbers, int));
		for (i = 1; i < n; i++)
		{
			printf("%s%d", separator, va_arg(numbers, int));
		}
		va_end(numbers);
		printf("\n");
	}
}
