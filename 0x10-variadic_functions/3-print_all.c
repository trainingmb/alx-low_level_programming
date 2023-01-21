#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints toprint, followed by a new line.
 * @format: is a list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list toprint;
	char *current, *sep;

	va_start(toprint, format);
	i = 0;
	sep = "";
	while (format != ((void *) 0) && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, (char) va_arg(toprint, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(toprint, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, (float) va_arg(toprint, double));
			sep = ", ";
			break;
		case 's':
			current = va_arg(toprint, char *);
			if (current == ((void *) 0))
				current = "(nil)";
			printf("%s%s", sep, current);
			sep = ", ";
			break;
		default:
			printf("%s", sep);
			sep = "";
			break;
		}
		i++;
	}
	va_end(toprint);
	printf("\n");
}
