#include <stdlib.h>

#ifndef LOGIC_PROTOTYPE
#define LOGIC_PROTOTYPE
// int * PIN = (int *) malloc(sizeof(int *));
// int * NAME = (int *) malloc(sizeof(char *));
int AMOUNT = 0;
// createAccount.c file
void create_account(char * name, int * pin);

// pin.c file
int check_pin(int supposed_pin);
int st0re_pin(int pin);

#endif