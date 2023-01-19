#ifndef FUNCTION_POINTER_HEADER
#define FUNCTION_POINTER_HEADER boing
#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
