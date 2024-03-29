#ifndef MAIN_H_HEADER
#define MAIN_H_HEADER boing
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

void before_main (void) __attribute__ ((constructor));

#endif
