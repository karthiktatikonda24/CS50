#include <stdio.h>
#include "cs50.h"
int height, row, column, space;
int main(void)
{
   do
   {
     height = get_int("Height: ");
   }
   while (height<1 || height>8);
   for (row =0; row<height; row++)
   {
      for (space = 0; space<height-row-1; space++)
      {
         printf(" ");
      }
      for (column=0; column<row+1; column++)
      {
         printf("#");
      }
      printf("  ");
      for (column=0; column<row+1; column++)
      {
         printf("#");
      }
      printf("\n");
   }
}
