#include <stdio.h>
#include <string.h>

void reverse_array(int *a, int n);
void printfw(int *a, int n);
/**
 * main -revers a string 
 * 
 * Return: 0
 */
int main(void)
{
   int *p;
   int a[] = {0, 1, 2, 3, 4, 5, 6}; 
   reverse_array(a, 7);
   printfw(a, 7);
}

void printfw(int *a, int n)
{
     int i;

     while (i < n)
     {
        printf("%d ,", a[i]);
        i++;
     }
     printf("\n");
}