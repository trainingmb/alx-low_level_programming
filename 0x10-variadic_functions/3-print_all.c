#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints numbers, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list numbers;

	if (n > 0)
	{
		va_start(numbers, n);
		i = 0;
		while (i < n)
		{
			printf("%d", va_arg(numbers, int));
		}
		va_end(numbers);
	}
	printf("\n");
}
