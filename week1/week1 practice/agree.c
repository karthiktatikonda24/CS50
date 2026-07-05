#include <stdio.h>
#include "cs50.h"

int main (void)
{
    char c = get_char("Do you agree that college and branch does matter in life?(y/n/Y/N)\n");

    if (c == 'y' || c == 'Y') // || stands for OR operator and && stands for AND operator
    {
        printf("You are right, college and branch does matter in life\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("You are wrong, college and branch does not matter in life\n");
    }
    else
    {
        printf("Invalid input. Please enter 'y' or 'n'.\n");
    }
}


// have no comments for this
// All the best

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)