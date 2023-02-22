#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int _putchar(char c);
void _puts(char *str);
char *read_textfile(const char *filenames);
int execute(char **argv, char **env);
int _strlen(char *s);

#endif
