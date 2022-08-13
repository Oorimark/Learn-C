#include <stdio.h>

struct struc
{
    int s;
};

int add (int a, int b){
    return (a + b);
}
int main(void){
    struct struc{
        int s;
    };

    char name[] = "Mark";
    char k,l,m;
    float age;
    int a;
    int b;

    a = 3;
    b = 4;
    
    printf("The size of char is %s", sizeof(a));

    printf("The sum of %d and %d is %d", a,b,add(a,b));

    return (0);
}