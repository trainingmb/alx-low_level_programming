#ifndef MAIN_H_HEADER
#define MAIN_H_HEADER boing
#include <stddef.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

int _putchar(char c);
void _putstr(char *str);
void _putstrlen(char *str, unsigned int len);
int _putuint(unsigned int u);
size_t print_list(const list_t *h);
unsigned int _pow(unsigned int u, int n);


#endif