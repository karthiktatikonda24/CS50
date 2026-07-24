#include "cs50.h"
#include <stdio.h>
#include "string.h"

int main (void)
{
    string text = get_string("Text: ");
    int letters =0;
    int sentences=0;
    int words=1;
    for( int i =0 ; i<strlen(text); i++)
    {
        if (text[i]>='a' && text[i]<='z' || text[i]>='A' && text[i]<= 'Z')
        {
            letters++;
        }
        else if (text[i] == ' ')  // we are not consideirng a comma because whenever we give a word after comma we need to leave a space so yeah comma is also included once we give a spcae no need to add an additioanl word for it 
        {
            words++;
        }
        else if (text[i] =='.' || text[i] == '!' || text[i] == '?' )
        {
            sentences++;
        }
    }
    
    float L = letters/ (float) words*100 ;
    float S = sentences/ (float) words*100;
    int index = 0.0588 * L - 0.296 * S - 15.8; // this is the index given by cs50 itself    
    if ( index <1)
    {
        printf("Before grade 1\n");
    }
    else if (index>16)
    {
        printf("Grade 16+\n");
    }
    else 
    {
        printf("Grade %i\n", index);
    }
}