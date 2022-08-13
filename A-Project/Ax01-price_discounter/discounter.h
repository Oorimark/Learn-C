#include <stdio.h>

/** 
 * discounter - discoun prices based on the purchase price
 * @price: price to be discounted
*/
int set_price_store[5];
int discounter(int price){
    float discount[4] = {.1,.3,.5,.9};
    
    if (price < 3000)
    {
        return printf("Price after discount is: %3f", price * discount[0]);
    }
    else if (price < 7000)
    {
        return printf("Price after discount is: %3f", price * discount[1]);
    }
    else if (price < 10000)
    {
        return printf("Price after discount is %f", price * discount[2]);
    }
    else if (price < 200000)
    {
        return printf("Price after discount is %f", price * discount[3]);
    }
    else
    {
        return printf("Price after discount is %f", price * 1.2);
    }
}
