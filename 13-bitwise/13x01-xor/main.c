/** using xor to swap numbers */
#include <stdio.h>

int main(void)
{
    int x, y;
    x = 800;
    y = -245;

    x ^= y;
    y ^= x;
    x ^= y;

    printf("The value of x = %8x \nThe value of y  = %8x", x, y);
    printf("The value of x = %d \nThe value of y  = %d", x, y);
}