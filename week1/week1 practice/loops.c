// multiplication table program using for loop
#include "cs50.h"
#include <stdio.h>
 
int main(void)
{
    int n = get_int("For what number are you willing to find the multiplication table?\n");
    for (int i = 1; i <= 10; i++) // for loop general syntax for increment +1 using i++ for decrement use i-- and for increment by 2 use i+=2 and for decrement by 2 use i-=2
    {
        printf("%i*%i = %i\n", n, i, n*i);
    }
}

// multiplication table program using while loop

int main(void)
{
    int n = get_int("For what number are you willing to find the multiplication table?\n");
    int i = 1;
    while (i<=10) // just remember the syntax of while loop and the condition in while loop is very important because if you forget to put the condition then it will run infinite times and your computer will hang and you will have to restart your computer
    {
        printf("%i*%i = %i\n", n, i, n*i);
        i+=1; // nothing to worry just other form of increment by 1 , suppose you need to increment in gp form then you can use i*=2 for increment in gp form and i/=2 for decrement in gp form
    }         
}

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)