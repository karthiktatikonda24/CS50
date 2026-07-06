#include <stdio.h>
#include "cs50.h"

int main (void)
{
    float x = get_float("What's your first number? ");
    float y = get_float("What's your second number? ");
    char operation = get_char("What operation would you like to perform? (+, -, *, /): ");//here we are using char because at my basic level i coulldnt understnad how to assign the string type to conditional statements 
    if (operation == '+')
    {
    printf("The sum is %f+%f=%f\n", x,y,x+y);
    }
    else if (operation == '-')
    {
        printf("The difference is %f-%f=%f\n", x,y,x-y);
    }
    else if (operation == '*')
    {
        printf("The product is %f*%f=%f\n", x,y,x*y);
    }
    else if (operation == '/')
    {
        printf("The quotient is %f/%f=%f\n", x,y,x/y);
    }
}

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)







