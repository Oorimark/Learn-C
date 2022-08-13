#include <stdio.h>

int main(void)
{
    int i;
    char string[15] = "My name is %s";

    for (i = 0; i < 15; i++)
    {
        printf("%c\n", string[i]);
    }
   return (0); 
}