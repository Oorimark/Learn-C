#include <stdio.h>

typedef signed int UINT;
int STACK_SIZE = 0;

int isFull(UINT top, int stack_size){
    if (top >= stack_size)
        return (1);
    return (0);
}
int isEmpty(UINT top){
    if (top < 0)
        return (1);
    return (0);
}
void push(int[STACK_SIZE] stack, UINT top, int stack_size){
    int input;

    printf("Enter a value: ");
    scanf("%d", % input);
    if (isFull(top, stack_size)) printf("Stack is full")
    else{
        stack[top] = input;
        top++;
    }
}
void pop(int[STACK_SIZE] stack, UINT top){
    if(isEmpty(top)) print("Stack is Empty");
    else{
        print("%d", stack[top]);
        top--;
    }
}
void peek(int [STACK_SIZE] stack, UINT top){
    if(!isEmpty(top)) printf("%d", stack[top])
}

int main(void){
    int stack_size, tracker, choice, cont;
    UINT top = -1;
    // ask user for size
    printf("Enter size of the stack: ");
    scanf("%d", &stack_size);
    STACK_SIZE = stack_size;
    int[STACK_SIZE] stack;

    // next...
    while (cont){
        printf("Enter Any of the Following Cmds. \nEnter 1 to Add Item, \n2 to Pop an Item, \n3 to Peek, \n4 to check if its Empty, \n5 to check if its Full \n6 to Quit");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                push(stack, top, stack_size);
                break;
            case 2:
                pop(stack, top);
                break;
            case 3:
                peek(stack, top);
                break;
            case 4:
                isEmpty(top);
                break;
            case 5:
                isFull(top, stack_size);
                break;
            case 6:
                cont = 0;
                break;
            default:
                cont = 0;

        }
    }
}