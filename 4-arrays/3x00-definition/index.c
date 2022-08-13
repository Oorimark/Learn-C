#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[7] = {12,3,5,1,23,23};
    int i;
    int len;

    len = (int) sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < len; i++)
    {
        printf("No %d is %d\n", i, arr[i]);
    }

    return (0);
}