#include <stdio.h>

char functionCaller();

int main(void){
    char k, l, m;
    int age;
    char str[] = "mark";
    int arr[4] = {2,3,5,2};
    int i = -9;

    printf("%s", str * 3);
    register int myVal;

    functionCaller();
    functionCaller();
    while(i < 0)
    {
        printf("%d\t", -i);
        i++;
    }

    return (0);
}

char functionCaller()
{
    static int counter = 0;
     printf("Function is called %d \n", counter++);
}