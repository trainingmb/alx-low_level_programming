#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char c;
	size_t count;
	ssize_t ct;

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
	  count++;
	} 
	while(count < letters);
	ct = count;

	fclose(fp);
	return (ct);
}

