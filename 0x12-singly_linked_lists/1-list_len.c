#include "lists.h"

/**
 * list_len - get length f=of singly linked list
 * @h: the head of the list
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
    size_t s;
    const list_t *iter;

    iter = h;
    for (s = 0; iter != ((void *) 0); iter = iter->next)
    {
        s++;
    }
    return (s);
}
