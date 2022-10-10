#include <stdio.h>
#include "./prototype/index.h"
/*
 * print__doubly - print the item in a double list
 * @h: head of the list
 * 
 * return: void
 */
void print__doubly(nodeptr head){
    nodeptr temp;
    temp = head;
    puts("\n");
    printf("The numbers in the list are: ");
    puts("\n");
    while (temp != NULL){
        printf("%d\n", (int) temp->value);
        temp = temp->next;
    }
}