#include <stdio.h>
#include <stdarg.h>

void print_sum(const int arg, ...)
{
    va_list ap;
    int i, counter;

    counter = 0;
    va_start(ap, arg);
    for (i = 0; i < arg; i++)
    {
        printf("%d", va_arg(ap, int));
    }
    while (counter++ < arg)
    {
        printf("%d", va_arg(ap, int));
    }
    va_end(ap);
}
int main(void)
{
    print_sum(7, 2,3,3,2,3,5,1);
    return (0);
}