#include <string.h>
#include <stdio.h>

void reverse_array(int *a, int n);

/**
 * reverse_array - reverse items in array
 * @a: array
 * @n: number of array 
 * 
 * Return: void 
 * 
 */
void reverse_array(int *a, int n)
{
    int tracker;
    int *new_arr[];

    new_arr = a;
    tracker = 0;
    while (tracker < n)
    {
        new_arr[tracker] = a[n];
        tracker++;
        n--;
    }
    a = *new_arr;
}