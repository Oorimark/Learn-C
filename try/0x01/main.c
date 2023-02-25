#include <stdio.h>
#define ARRAY_SIZE 10

typedef struct node {
    char * name,
    node * next
} * nodeptr;

void main(void){
    nodeptr head, temp, new_node;
    int counter = 0;
    char * names[ARRAY_SIZE] = {
        "Jane",
        "David",
        "Alice",
        "Sarah",
        "Samson",
        "Victoria",
        "Mercy",
        "Peace",
        "Johnson",
        "Doe"
    }

    new_node = head = malloc(sizeof(node));
    head->value = "Sarah";

    while (counter++ < ARRAY_SIZE){

    }
}