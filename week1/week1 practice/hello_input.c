#include <stdio.h>  // Imports the standard input/output library for core functions like printf.
#include "cs50.h"   // Imports the custom CS50 library to use beginner-friendly inputs like get_string.

int main(void)      
{
    // Prompts the user with a question and safely stores their typed response inside a text variable named 'name'.
    string name = get_string("What's your name? ");

    // Outputs the final greeting. The '%s' acts as a placeholder that automatically swaps out for the string stored in 'name'.
    printf("Hello, %s\n", name);

}                

// If you are compiling this code localy on Windows/VS Code instead of the cloud sandbox, you will encounter compilation errors unless you follow these two local linking rules:
//Local Library Files: You must download and place the official cs50.h and cs50.c files directly inside this exact folder workspace. Change #include <cs50.h> to #include "cs50.h" so the compiler knows to look inside your current directory instead of system paths.
//The Dual Compilation Comand: Because this code utilizes custom logic from the CS50 library, you cannot compile it with a standard single-file command. You must pass both your file and the library file to the compiler together using this exact terminal syntax:
//  gcc hello.c cs50.c -o hello_input
// .\hello_input for my case you can change it as per your file name 
// upload these commands each time after sdaving by clicking ctrl+s or using the save icon in the top right corner of your VS Code window.
// All the best!!

//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)
