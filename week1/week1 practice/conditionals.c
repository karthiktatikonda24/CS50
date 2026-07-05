//Conditionals - if , else if , else
// operations - < , > , <= , >= , == , !=
// types - int(integer type) , float(decimal 32 bit so only approximately 4 billion can be used) , double , char (single character Y/N type), string (sentences), long , long long , bool(true or false)
// cs50 added advantage get_char , get_double , get_float , get_int , get_long , get_long_long , get_string 
// to print them %d(double), %f(float) , %lf , %c(char) , %s(string) , %ld , %lld ,  %i(integer)

#include <stdio.h>
#include "cs50.h"

int main (void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x<y)
    {
        printf("x is less than y\n");
    }
    else if (x>y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}

// we dont use if 3 times which makes the process longer for the computer 
// we dont use else if (x==y) because it is also too long for the computer to process 
// so always try to cut shorten the code as much as as possible for the computer to process it faster and efficiently
// just remeber the syntax more than enough 

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)
