#include <stdio.h> // This imports standard input/output libraries so you can use functions like printf, scanf, etc. (Check docs at https://manual.cs50.io/)

int main(void) // The "entry point" of the program. The computer looks for this exact name to know where your code begins executing. 'int' means it outputs an integer status code when done, and 'void' means it takes no starting inputs.
{ // This opening curly brace marks the absolute beginning of your main program's instructions. Think of it like opening a box of code.
    printf("Hello,\n"); // 'printf' stands for "print formatted" and outputs text to your terminal screen. The '\n' acts exactly like pressing the 'Enter' key on your keyboard to go to a new line. The semicolon ';' is a mandatory period at the end of a programming sentence.
    printf("IIT Patna!");
}// This closing curly brace marks the absolute end of your main program's instructions. It closes the box of code.

// Escape Sequence,Official Name,What it Does & How to Use It
//   \n,Newline,Moves the terminal cursor to the start of the next line (exactly like pressing the Enter key).
//   \t,Horizontal Tab,"Inserts a clean, standard tab space. Excellent for aligning text into columns without manually tapping the spacebar."
//   \\,Backslash,"Prints a single, literal backslash \. Since a single \ normally signals a command, you have to type it twice to actually print one on screen."
//   \"",Double Quote,"Prints a literal double quote "". This stops C from thinking you are trying to end your text string early. (Example: printf(""He said, \""Hello!\"""");)"
//   \',Single Quote,Prints a literal single quote '. You'll use this a lot when working with individual individual characters in upcoming weeks.
//   \r,Carriage Return,Moves the cursor back to the absolute beginning of the current line without moving down. Anything you print after \r will overwrite what was already written on that line.
//   \b,Backspace,"Moves the terminal cursor back by one character space, overwriting or bumping back over the character right before it."
//   \a,Alert / Bell,"Tells your operating system to trigger a classic, retro system warning beep or alert sound when that line of code executes!"
//   \0,Null Character,"Represents the number 0 in computer memory, used to signal the absolute end of a string of text. Keep this in your notes—it is going to be your superpower in Week 2!"


//THANKYOU 
//AUTHOR KARTHIK(IITPATNA)