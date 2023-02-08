#include "main.h"
/**
 * read_textfile - read from a text file and write to std out
 * @filename: The name of the file to read from
 * @letters: the number of letters to read
 * Return: The size of the file in char count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	size_t count;
	ssize_t ct;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	count = 0;
	do {
		c = fgetc(fp);
		if (feof(fp))
			break;
		if (_putchar(c) == -1)
			return (0);
		count++;
	} while (count < letters);
	ct = count;
	fclose(fp);
	return (ct);
}
