#include <stdio.h>
#define  SQR(X) X*X
#define MIN(a, b) (a > b) ? b : a

int main(void)
{
    int a, b;
    #ifdef KEY 
    a = 2;
    b = 4;
    printf("The time is %s\n", __TIME__);
    printf("The date is %s\n", __DATE__);
    printf("The min between %d and %d is %d\n", a, b, MIN(a, b));
    printf("The sqr of %d is %d", 2, SQR(2));
    #else
        #error "KEY IS NOT DEFINED!"
    #endif
}

/** 
 * PREPROCESSOR DIRECTIVE
 * 1. #include
 * 2. #define
 * 3. #ifndef
 * 4. #ifdef
 * 5. #if
 * 6. #else
 * 7. #elif
 * 8. #endif
 * 9. #error
 */