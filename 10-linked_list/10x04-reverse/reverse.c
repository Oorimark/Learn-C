#include <stdio.h>
#include "../prototype/prototype.h"

nodeptr reverse(nodeptr head)
{
    nodeptr prev_node, next_node, current_node;
    prev_node = 0;
    current_node = next_node = head;

    while (current_node != NULL)
    {
        next_node = current_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }
    head = prev_node;
    return (head);
}