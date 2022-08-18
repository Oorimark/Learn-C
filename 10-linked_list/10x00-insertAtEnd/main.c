#include <stdio.h>
#include <stdlib.h>
#include "../prototype/prototype.h"

int main(int argc, char * argv[])
{
    int *input, *input_item;
    int count;

    count = 0;
    nodeptr first, new_node, temp;
    first = NULL;
    printf("Enter the length of the list: ");
    scanf("%d", &input);
    first = malloc(sizeof(node));
    new_node = first;
    while (count++ < (int) input)
    {
            printf("Enter item %d: ", count);
            scanf("%d", &input_item);
            new_node->value = (int) input_item;
            if (count == (int) input)
            { // if it as reached the end
                new_node->next = NULL;
            }
            else{
                temp = malloc(sizeof(node));
                new_node->next = temp;
                new_node = temp;
            }
    }
    print_list(first);
}