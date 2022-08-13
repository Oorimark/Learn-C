#include <stdio.h>
#define BASE_URL ""

typedef unsigned int BIGINT;
typedef struct dog dog_T;
typedef int VAR;

/**
 * struct dog - dog variables
 * @name: first member
 * @age: second memeber
 * @owner: third member 
 */
struct dog
{
    char *name;
    BIGINT age;
    char *owner;
};

/**
 * main - check the code
 * 
 * Return: void
 */
int main(void)
{
    dog_T dog_1;
    VAR *sample_var;

    sample_var = {1,2,3};
    dog_1.name = "Bhingo";
    dog_1.age = 20;
    printf("My name is %s and I am %d years old", dog_1.name, dog_1.age);
    return (0);
}
