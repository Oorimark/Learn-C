#include <stdlib.h>
#include <stdio.h>
#include "../prototype/prototype.h"

int main(int argc, const char * argv[])
{
    nodeptr first, new_node, temp;
    first = NULL;
    first = malloc(sizeof(node));
    new_node = first;
    new_node->next = NULL;

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
    temp->value = 20;
    temp->next = first;
    first = temp;

    return (0);
}