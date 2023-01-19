#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: char pointer to the name to print
 * @f: function pointer to name printing function 
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
