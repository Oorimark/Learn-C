#include <stdio.h>
#include "../constants/index.h"

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
        int first_dash = (DRAW_LINE_LENGTH / 3) - 3;
        int last_dash = (DRAW_LINE_LENGTH / 3) - 3;

        draw_line(first_dash);
        printf(" %s ", msg);
        draw_line(last_dash);
        puts("\n");
    }
    void run(void){
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    write_msg("WELCOME TO SMART ATM");
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    draw_line(DRAW_LINE_LENGTH);
    puts("\n");
    }
    run();
}
int * ui_pin_input(void){
    int * input;
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
}

void main(void){
    int * result;

    ui_welcome_screen();
    ui_show_tip("\nDon't have one? enter 1 to create your pin\n");
    result = ui_pin_input();
 }