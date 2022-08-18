#ifndef PROTOTYPE
#define PROTOTYPE
typedef struct node *nodeptr;
struct node{
    int value;
    nodeptr next;
};
typedef struct node node;
void print_list(node *h);
#endif