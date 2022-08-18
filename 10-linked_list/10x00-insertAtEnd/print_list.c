#include "../prototype/prototype.h"
#include <stdio.h>

/**
 * print_list - prints items in the list
 * @len: lenght of the list 
 * 
 * Return: void
 */
void print_list(nodeptr h)
{
    nodeptr temp;
    temp = h;
    printf("The items in the list are: ");
    puts("\n");
    while (temp != NULL)
    {
        printf("Item %d", (int) temp->value);
        puts("\n");
        temp = temp->next;
    }
}