#include <stdio.h>

#include "./deposit.c"
#include "./create_account.c"
// #include "./create_balance.c"

// typedef void deposit(int amount) OPERATION_DEF;

deposit bank_operation_factory(int option, int amount, int pin){
    switch(option){
        case 1:
        break;
        case 2:
        return deposit
        default:
        printf("Invalid request.")
        break
    }
}

/*== CREATE ACCOUNT ==*/
/**
 * create_account - create an account
 * @brief Create a account
 * @param name
 * @param pin
 * @return void
 */
void create_account(char *name, int *pin)
{
    char *NAME;
    int *PIN;

    NAME = name;
    PIN = pin;
}

/*== GENERATE PIN ==*/
#define STORE_SIZE 20

int pin_store[STORE_SIZE];
int check_pin(int supposed_pin)
{
    int i;
    for (i = 0; i < STORE_SIZE; i++)
    {
        if (pin_store[i] == supposed_pin)
        {
            return (1);
        }
    }
    return (0);
}
int store_pin(int *pin)
{
    int i;
    for (i = 0; i < STORE_SIZE; i++)
    {
        if (!pin_store[i])
        {
            pin_store[i] = (int) pin;
            return (1);
        }
    }
    return (0);
}

/*== DEPOSIT ==*/
int main(void){

}