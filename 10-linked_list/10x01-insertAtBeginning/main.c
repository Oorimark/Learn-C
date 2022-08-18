#include <stdio.h>
#include <stdlib.h>
#include "../prototype/prototype.h"

int main(int argc, const char * argv[])
{
    nodeptr first, new_node, temp;
    int *input, *input_item, count;

    count = 0;
    first = NULL;
    printf("Enter the length of the list: ");
    scanf("%d", &input);
    while (count++ < (int) input)
    {
        printf("Enter item %d: ", count);
        scanf("%d", &input_item);
        if (first == NULL)
        {
            first  = malloc(sizeof(node));
            new_node = first;
            new_node->value = (int) input_item;
            new_node->next = NULL;
        }
        else
        {
            temp = malloc(sizeof(node));
            temp->value = (int) input_item;
            temp->next = first;
            first = temp;
        }
    }
    print_list(first);
    return (0);
}