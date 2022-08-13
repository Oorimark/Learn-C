#include <stdio.h>
/**
  main - entry point to 
 * @brief 
 * 
 */
int main(void)
{
    int n;
    int *p;
    n = 23;
    p = &n;

    *p = 90;

    printf("n memeory Address is at: %lu", n);
}