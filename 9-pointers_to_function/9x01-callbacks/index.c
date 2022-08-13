#include <stdio.h>

int greater_than(int a, int b)
{
    if (b > a)
        return (1);
    return (-1);
}

int print_greater_than(int cav, int A[], int size, int (*checker)(int, int))
{
    int i;

    for (i = 0; i < size; i++)
    {
        if(checker(cav, A[i]) > 0)
        {
            printf("%d is greater than %d\n", A[i], cav);
        }
    }
}
int main(void)
{
     int A[] = {1,2,5,32,212,23,1,5};
     int len = sizeof(A) / sizeof(A[0]);
     print_greater_than(98, A, len, greater_than);
}