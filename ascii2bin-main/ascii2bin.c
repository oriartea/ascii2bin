#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char * argv[], char ** envp)
{
   int retval;
   char ascii_value = 0;
   char digit = 0;
   char offset = 0 x 30;
   int number = 0;
   int error = 0;
   
   retval = read (0, &ascii_value, 1);
   while (retval == 1 && ascii_value !='\n')
   {
      
      if (ascii_value == offset || ascii_value == 0 x 31)
      {
         digit = ascii_value - offset;
         number = (number << 1) + digit;
         retval = read(0, &ascii_value, 1);
      }
      
         else
         {
          retval = 0;
          error = error + 1;
          break;
         } 
   } 
      
      if (error == 0)
      {
         printf("%u\n", number);
         return 0;
      }
         else
         {
            return 1;
         }
}         
                            