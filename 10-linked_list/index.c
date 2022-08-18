#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"


int main(int argc, const char *argv[])
{
    nodeptr first = NULL;
    first = malloc(sizeof(node));
    first->next = NULL;
    first->value = 61;

    // second chunck
    first->next = malloc(sizeof(node));
    first->next->value = 62;
    first->next->next = NULL;

    // third chunck
    first->next->next = malloc(sizeof(node));
    first->next->next->value = 63;
    first->next->next->next = NULL;

    // inserting a chuck at the beginning of the list
    nodeptr temp;
    temp = malloc(sizeof(node));
    temp->next = first;
    temp->value = 23;
    first = temp;
    
    free(temp);
    // ==> second time
    temp = malloc(sizeof(node));
    temp->next = first;
    first = temp;

    free(temp);
    // ==> third time
    temp = malloc(sizeof(node));
    temp->next = first;
    first = temp;

    print_list(temp);
    return (0);
}