#include "main.h"
#include <unistd.h>

/**
 * str2str - converts an str to an str
 * @str: The string to convert
 * Return: the address of the string string
 */
char *str2str(const char *str)
{
	char *strret;
	unsigned int len, i;
	char hex_upper[] = "0123456789ABCDEF";

	len = i = 0;
	while (str && str[i] != '\0')
	{
		if (str[i] < 32 || str[1] >= 127)
			len += 4;
		else
			len++;
		i++;
	}
	strret = malloc(len + 1);
	if (strret == ((void *) 0))
	{
		return (strret);
	}
	strret[len] = '\0';
	len = i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[1] >= 127)
		{
			strret[len] = '\\';
			strret[len + 1] = 'x';
			strret[len + 2] = hex_upper[str[i] >> 4];
			strret[len + 3] = hex_upper[str[i] % 16];
			len += 4;
		}
		else
		{
			strret[len] = str[i];
			len++;
		}
		i++;
	}
	return (strret);
}
/**
 * buffer_controller - ensures the write function is not called too often
 * @print_buffer: the buffer
 * @str: The string write to buffer
 * @mx: the maximum length
 * @flush: falg to flush
 * Return: length of string written
 */
int buffer_controller(char * print_buffer, const char *str, int mx, char flush)
{
	static unsigned int indx = 0;
	int i;

	i = 0;
	if ((str == ((void *) 0) || str[0] == '\0') && flush)
	{
		flush_buffer(print_buffer, indx);
		indx = 0;
		return (0);
	}
	if (mx < 0)
	{
		while (str[i] != '\0')
		{
			printf("-%d, %d", indx, i);
			if (indx > (BUFFER_LEN))
			{
				flush_buffer(print_buffer, (BUFFER_LEN));
				indx = 0;
			}
			else
			{
				print_buffer[indx] = str[i];
				i++;
				indx++;
			}
		}
	}
	else
	{
		while (str[i] != '\0' && i < mx)
		{
			if (indx > (BUFFER_LEN))
			{
				flush_buffer(print_buffer, (BUFFER_LEN));
				indx = 0;
			}
			else
			{
				print_buffer[indx] =(char) str[i];
				i++;
				indx++;
			}
		}
	}

	return (i);
}
/**
 * flush_buffer - clears out the buffer
 * print_buffer: the buffer to write from
 * @len: the length to write
 * Return: length of string written to standard output
 */
int flush_buffer(char *print_buffer, unsigned int len)
{
	return (write(1, print_buffer, len));
}
