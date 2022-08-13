#include <stdio.h>
/** 
 * main - prints *
 * 
 * description: prints * in certain formate
 * Return: returns 0 (success) 
 */
int main(void){
    int i = 0;
    int j;

    while (i < 5){
        while(j < 3){
            printf("* ");
            j++;
        }

        printf("\n");
        j = 0;
        i++;
    }
    return (0);
}