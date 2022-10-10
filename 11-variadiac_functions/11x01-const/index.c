#include <stdio.h>

int main()
{
    const int numb = 4;
    const i = 3, j = 7;
    // cannot change what p value is
    const int *p = &i;
    *p = 7; // error
    p = &j; // works
    // not changing the address
    int * const p = &i
    p = &j; // error
    *p = 8; // works
    printf("The const value is %d", numb);
    return (0);
}