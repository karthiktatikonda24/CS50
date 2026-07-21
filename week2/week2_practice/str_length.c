#include "cs50.h"
#include <stdio.h>

int main(void)
{
    string name = get_string("Name: ");
    int n=0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);
    printf("%c%c%c\n", name[0], name[1], name[2]);
}
 