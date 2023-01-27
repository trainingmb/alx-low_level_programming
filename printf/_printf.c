#include "main.h"
/**
 * _printf - PRINTF
 * @formart: the string formart
 * Return: the length of string written
 */
int _printf(const char *formart, ...)
{
	va_list args;
	unsigned int i, count;
	char seq, print_buffer[(BUFFER_LEN)], *str;

	count = i = seq = 0;
	va_start(args, formart);
	for (i = 0; formart && formart[i] != '\0'; i++)
	{
		if (seq)
		{
			if ((formart[i] == 'd') || (formart[i] == 'i'))
				str = int2str(va_arg(args, int));
			else if (formart[i] == 's')
				str = str2str(va_arg(args, char *));
			else if (formart[i] == 'u')
				str = uint2str(va_arg(args, unsigned int));
			else if (formart[i] == 'o')
				str = uoct2str(va_arg(args, unsigned int));
			else if (formart[i] == 'x')
				str = uhex2str(va_arg(args, unsigned int));
			else if (formart[i] == 'X')
				str = UHEX2str(va_arg(args, unsigned int));
			else if (formart[i] == 'c')
			{
				seq = va_arg(args, int);
				count += buffer_controller(print_buffer, &seq, 'c');
				seq = 0;
			}
			else if (formart[i] == '%')
			{
				seq = "%"
				str = &seq;
			}
			else
			{
				seq = '%';
				count += buffer_controller(print_buffer, &seq, 'c');
				seq = 0;
				i--;
			}
			if ((seq) && (str != ((void *) 0)))
			{
				count += buffer_controller(print_buffer, str, 0);
				seq = 0;
				free(str);
			}
		}
		else
		{
			if (formart[i] == '%')
				seq = 1;
			else
			{
				buffer_controller(print_buffer, &formart[i], 'c');
				count++;
			}
		}
	}
	buffer_controller(print_buffer, "", 'f');
	va_end(args);
	return (count);
}
