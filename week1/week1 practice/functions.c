#include <stdio.h>
#include "cs50.h"

// 1.Function Prototype
// C reads code from top to bottom. Because our real 'meow' function is down at the bottom,
// we must put this line here to warn the compiler: "Hey, I made a custom function called meow.
// It doesn't give back a value (void), and it expects a whole number (int) as an input."
void meow (int times);

int main (void)
{
    // 2. GETTING THE NUMBER
    // We ask the user for a number and save it in a local variable called 'n'.
    int n = get_int("How many times should I print 'Meow'?\n");
    
    // We tell the computer to execute our custom 'meow' command, and we pass our number 'n' 
    // inside the parentheses as the starting fuel.
    meow(n);
}

// 4.Function Definition
// This is the actual blueprint of our custom shortcut. 
// Whatever number was passed into the parentheses above gets copied directly into a brand-new 
// variable called 'times' that only exists inside this specific box of code.
void meow (int times) 
{
    // This loop starts at 0 and runs as long as 'i' is less than 'times'.
    // If the user typed 3, 'times' becomes 3, and this loop runs exactly 3 times!
    for (int i = 0; i < times; i++)
    {
        printf("Meow\n"); // Prints the word and jumps to the next line.
    }
}

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA) 
