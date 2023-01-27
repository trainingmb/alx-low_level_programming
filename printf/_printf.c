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
			else if (formart[i] == 'c')
			{
				seq = 0;
				i--;
			}
			else
			{
				seq = 0;
				buffer_controller(print_buffer, "%", 0);
				count++;
				i--;
			}
			if ((seq) && (str != ((void *) 0)))
			{
				count += buffer_controller(print_buffer, str, 0);
				seq = 0;
			}
		}
		else
		{
			if (formart[i] == '%')
				seq = 1;
			else
			{
				buffer_controller(print_buffer, &formart[i], 0);
				count++;
			}
		}
	}
	buffer_controller(print_buffer, "", 1);
	va_end(args);
	return (count);
}

/**
 * printf - PRINTF
 * @formart: the string formart
 * Return: the length of string written
 */
int printf(const char *formart, ...)
{
	return (_printf(formart));
}