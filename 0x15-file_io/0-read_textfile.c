#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	ssize_t count;

	fp = fopen(filename, "r");
	if(fp == NULL)
	  return (0);
	count = 0;
	do
	{
	  c = fgetc(fp);
	  if( feof(fp) )
	     break ;
	  _putchar(c);
	} while(count < letters);

	fclose(fp);
	return (count);
}
