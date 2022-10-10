#ifndef LOGIC_PROTOTYPE
#define LOGIC_PROTOTYPE
int * PIN = malloc(sizeof(int *));
int * NAME = malloc(sizeof(char *));
void create_account(char * name, int pin);
void pin_checker(int supposed_pin);
#endif