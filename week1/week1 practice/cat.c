#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int n; // see it is outside the loop void because if the n is defined inside the loop then it will be defined only inside the loop and if we try to use it outside the loop then it will give an error because it is not defined outside the loop so we define it outside the loop so that we can use it outside the loop as well
    while (true)
    {
        n = get_int("How many times should I print 'Meow'? ");
        if (n<0) // here we are checking whether the n is negative or not and also checking whether the n is an integer or not if it is negative or not an integer then we will ask the user to enter the input again until the user enters a non-negative integer
        {
            printf("Invalid input. Please enter a non-negative integer.\n");
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i<n; i++)
    {
        printf("Meow\n");
    }
}

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)