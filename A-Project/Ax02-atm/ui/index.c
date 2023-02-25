#include <stdio.h>
#include <string.h>
#include "./prototype.h"
#include "../constants/index.h"
#include "../logic/index.c"
#include "../logic/prototype.h"
#include "../util/index.c"
#include "../logic/pin.c"
#include "../logic/deposit.c"

void ui_factory(void){

}
void draw_line(int len){
    int tracker = 0;
    while (tracker++ < len)
    {
        printf("*");
    }
}
void ui_welcome_screen(void){
    void write_msg(char * msg){
        int msg_length = strlen(msg);
        int dash = ((DRAW_LINE_LENGTH - msg_length) - 2 ) / 2;

        draw_line(dash);
        printf(" %s ", msg);
        draw_line(dash);
        puts("\n");
    }
    void run(void){
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    write_msg("WELCOME TO SMART ATM, HOME OF THE WISE AND STRONG");
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    }
    run();
}
int * ui_pin_input(void){
    int * input;
    ui_show_tip("\nDon't have one? enter 1 to create your pin\n");

    printf("Enter Your Pin: ");
    scanf("%d", &input);
    return (input);
}
void ui_show_tip(char *msg){
    printf("%s", msg);
}
int * show_tip_input(){
    int * input;
    scanf("%d", &input);
    return (input);
}
void ui_create_pin(){
    int * pin;
    char * name;

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Set you PIN: ");
    scanf("%d", &pin);
    store_pin(pin);
    printf("\nCreated!\n");
    ui_account_option();
}
int * ui_account_option(void){
    int * input;
    printf("\n-> Withdraw Press 1\n");
    printf("\n-> Deposit Press 2\n");
    printf("\n-> Check Balance Press 3\n");
    scanf("%d", &input);
    return input;
}

// specialized functions
void deposit__amount(void){
    int * response;
    void deposit_object(int amount);

    ui_show_tip("Enter amount: ");
    response = request_int_value();
    int amount = (int)response;
    deposit_object = bank_operation_factory(2);
    
}

void main(void){
    int * pin_response, response, pin_value, check_response;
    int status;

    ui_welcome_screen(); // prints welcome screen
    pin_value = ui_pin_input();

    if(pin_value){
        // if pin is entered...

        // 1. check pin if it  correct
        check_response = check_pin(pin_value);
        if (check_response){

        }
        else{
            // tell user to create pin
            ui_create_pin();
        }

        /* TO BE IMPLEMENTED!... */
        // switch((int) pin_response){
        //     case 1:
        //     ui_create_pin();
        //     break;
        //     default:
        //     // check if the pin is correct
        //     status = check_pin((int) pin_response);
        //     if (status){
        //         response = (int) ui_account_option(); // pin exist
        //         switch(response){
        //             case 2:
        //             deposit__amount();
        //             break;
        //             default:
        //             printf("Invalid request, try again...");
        //             break;
        //         }
        //     }
        //     else { ui_show_tip("Sorry this pin doesn't exist, try again..."); }
        //     // print the status message
        //     break;
        // }
    }
    else{
        printf("Enter a pin!");
    }
 }