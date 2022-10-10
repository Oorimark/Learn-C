#include <stdio.h>
#include <stdlib.h>
#include "../prototype/index.h"

nodeptr create_doubly_list(){
    nodeptr head, new_node, temp;
    int choice = 1;
    int *input;
    head = NULL;

    while (choice){
        new_node = (nodeptr) malloc(sizeof(node));
        printf("Enter a number: ");
        scanf("%d", &input);
        new_node->value = (int) input;
        if(head == NULL){
            head = temp = new_node;
            new_node->prev = new_node->next = NULL;
        }
        else{
            temp->next = new_node;
            new_node->prev = temp;
            new_node->next = NULL;
            temp = new_node;
        }
        printf("Do you want to continue? 1->Yes | 0->No: ");
        scanf("%d", &choice);
    }
    return head;
}
int main(void){
    nodeptr head;
    head = create_doubly_list();
    print__doubly(head);
}