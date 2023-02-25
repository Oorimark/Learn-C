#include <stdio.h>

#define STACK_INIT_SIZE 3
#define STACK_SIZE STACK_INIT_SIZE - 1

int isFull(signed int *top, int stack_size){
    if (*top >= stack_size)
        return (1);
    return (0);
};
int isEmpty(signed int * top){
    if (*top < 0)
    {
        return (1);
    }
    return (0);
};
void push(int (*stack)[STACK_SIZE], signed int *top, int stack_size){
    int input;

    printf("Enter a value: ");
    scanf("%d", &input);
    if (*top > stack_size){
        printf("Stack is full\n");
    }
    else{
        (*top)++;
        (*stack)[*top] = input;
        printf("\nItem Added!\n");
    }
};
void pop(int (* stack)[STACK_SIZE], signed int * top){
    if(isEmpty(top)) printf("Stack is Empty\n");
    else{
        printf("%d is popped out\n", (*stack)[*top]);
        (*top)--;
    }
};
void peek(int (* stack)[STACK_SIZE], signed int * top){
    if(!isEmpty(top)) printf("%d is the Peek\n", (*stack)[*top]);
    else{
        printf("Stack is Empty!\n");
    }
};

void display(int (* stack)[STACK_SIZE], signed int * top){
    int item;
    printf("\ndisplaying the stack...\n");
    for (item = 0; item <= (*top); item++){
        printf("\nitem %d is %d\n", item, (*stack)[item]);
    }
    puts("\n");
}
int main(void){
    int stack_size, tracker, choice, cont;
    signed int top = -1;
    // // ask user for size
    // printf("Enter size of the stack: ");
    // scanf("%d", &stack_size);
    // #define STACK_SIZE stack_size
    int stack[STACK_SIZE];

    // next...
    while (cont){
        printf("Enter Any of the Following Cmds. \nEnter \n ->1 to Add Item, \n ->2 to Pop an Item, \n ->3 to Peek, \n ->4 to check if its Empty, \n ->5 to check if its Full \n ->6 to Display \n ->7 to Quit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                push(&stack, &top, STACK_SIZE);
                break;
            case 2:
                pop(&stack, &top);
                break;
            case 3:
                peek(&stack, &top);
                break;
            case 4:
                if (isEmpty(&top)){
                    printf("Stack is Empty!\n");
                } else { printf("Not Empty\n"); }
                break;
            case 5:
                if (isFull(&top, STACK_SIZE)){
                    printf("Stack is full\n");
                }
                else { printf("Not Full\n"); }
                break;
            case 6:
                display(&stack, &top);
                break;
            case 7:
                cont = 0;
                break;
            default:
                printf("Unknown command...");
                cont = 0;

        }
    }
}