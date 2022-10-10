/* all prototypes goes here... */
#ifndef PROTOTYPE
#define PROTOTYPE
typedef struct node * nodeptr;
struct node {
    int value;
    nodeptr prev;
    nodeptr next;
};
typedef struct node node;
void print__doubly(nodeptr head);
#endif