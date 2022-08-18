#include <stdio.h>
#include "prototype.h"
/**
 * print_list - prints items in a linked list
 * @h: header of the list
 * 
 * Return: void
 */
void print_list(node h)
{
    while (h->next !== NULL)
    {
        printf("%d", h->value);
    }
}