#include <stdio.h>
#include <string.h>
#define HASH_SIZE 10

typedef struct node{
    char * name,
    node * next;
} * nodeptr;

int hash_function(char* value){
    unsigned int index;
    index = (unsigned int) (value[0] * value[strlen(value) - 1] * 135791113) % HASH_SIZE;
    return (index);
}

void insert_value(char * value, char * (* HASH_TABLE)[HASH_SIZE]){
    int index;

    index = hash_function(value);
    // check if the index is occupied
    if (!(*HASH_TABLE)[index]){
        (*HASH_TABLE)[index] = value;
    } 
}

void display_table(char * (* HASH_TABLE)[HASH_SIZE]){
    int i;

    for (i = 0; i < HASH_SIZE; i++){
        printf("%d ---> %s\n", i, (*HASH_TABLE)[i]);
    }
}
void main(void){
    char * TABLE[HASH_SIZE] = {
        "Jane",
        "David",
        "Alice",
        "Sarah",
        "Samson",
        "Victoria",
        "Mercy",
        "Peace",
        "Johnson",
        "Doe"
    };
    char * HASH_TABLE[HASH_SIZE] = {};
    int i;

    // insert
    for (i = 0; i < HASH_SIZE; i++){
        insert_value(TABLE[i], &HASH_TABLE);
    }
    // display the table
    display_table(&HASH_TABLE);
}