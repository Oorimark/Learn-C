#include <stdlib.h>
#include <stdio.h>
#include "../prototype/prototype.h"

int main(int argc, const char * argv[])
{
    nodeptr first, new_node, temp, handler;
    int *pos, *item_value, count;

    count = 0;
    first = NULL;
    first = malloc(sizeof(node));
    first->value = 120;
    first->next = NULL;

    // inserting dummy data
    // item 1
    temp = malloc(sizeof(node));
    temp->value = 10;
    temp->next = first;
    first = temp;

    // item 2
    temp = malloc(sizeof(node));
    temp->value = 20;
    temp->next = first;
    first = temp;

    // item 3
    temp = malloc(sizeof(node));
    temp->value = 40;
    temp->next = first;
    first = temp;

    print_list(first); // prints existing list

    // enter position
    printf("Enter position you want to insert: ");
    scanf("%d", &pos);
    // enter value
    printf("Enter value: ");
    scanf("%d", &item_value);
    // traverse the list
    temp = first;
    while (count++ < (((int) pos) - 1))
    {
        temp = temp->next;
    }
    handler = malloc(sizeof(nodeptr));
    handler->value = (int) item_value;
    handler->next = temp->next;
    temp->next = handler;
    print_list(first);

    return (0);
}