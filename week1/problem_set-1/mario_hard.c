#include <stdio.h>
#include "cs50.h"
int height, row, column, space; // defining variables 
int main(void)
{
    do
    {
    height = get_int("Height: "); // receiving the inpuit of height from the users
    }
    while (height>8 || height<1); // condition for height as per cs50 
    for (row=0; row<height ; row++) // remeber the code always runs from top to bottom so doesnt matter if you start with coloum and then row or row and then column at the end they are just variables
    {
        for (space=height-row-1; space>0; space--) // see we apply space because we want the steep towards right instead of left so we need to apply spaces , you can see for row 1 we have 4 spaces for height 5 so it is of the form spaces at nth row = height - n -1 
        {
            printf(" ");
        }
        for (column=0; column<=row; column++) // we can imagine of putting column<height here also but what happens then when the loop repeats itself the hashtag symbol gets printed four times but when you put the condition that column <= row imagine row = 0 column = 0 , then column++ makes column count 1 which is greater than row so condition satisifies so this is the exact and most important condition we can think about in this question
        {
            printf("#");
        }
        printf("  "); // adding double space after the loop
    
        for (column=0; column<=row; column++)
            {
                printf("#"); // just repeating to make the right side inclined hashtags
            }
        printf("\n");// \n just takes the hashtag and the space to next line after each for loop of the column and space 
    }
}

// Thankyou 
// Author Karhtik(IIT PATNA)