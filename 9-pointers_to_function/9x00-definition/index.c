#include <stdio.h>

void fun(int a, int b);

int main(void)
{
    void (*fun_p)(int, int) = fun;
    fun_p(2,2);
}

void fun(int a, int b)
{
   printf("The addition of %d and %d is %d", a, b, a + b);
}