#include<stdio.h>
#include "cs50.h"

int main (void)
{
    for ( int row = 0 ; row < 3 ; row++)// first the compiler comes here and reads this and then goes to next line of code 
    {
        for ( int column = 0 ; column <3; column++) // then the compiler comes here and from row 1 it completes entier column 1 
        {
            printf("H");
        }
        printf("\n");// now the compiler comes here and prints the new line and then goes to next row and completes the entier column 2 and so on
    }
}// always remember only after completing the inner loop the compiler comes to the outer loop and then goes to next row and completes the entier column 2 and so on

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)