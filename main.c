#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
   float a, b, c;
   char operator;
   char container[128];	// Maximum size for the numbers

   printf("Please enter the numbers: ");

   // If reading input failed,
   if(!fgets(container, 128, stdin))
   {
      // Print message then exit
      puts("Failed to read input");
      return 1;
   }
   // Converts a = (a)nything(to)(i)nteger of container
   a = atoi(container);

   // If a is Invalid
   if(!a){
      printf("Invalid!");
      return -1;
   }

   printf("Enter the second number: ");
   
   // If reading input failed,
   if(!fgets(container, 128, stdin))
   {
      // Print message then exit
      puts("Failed to read input");
      return 1;
   }
   b = atoi(container);
   

   // If b is invalid
   if(!b){
      printf("Invalid second number!");
      return -1;
   }
      
   printf("****Please type one of the following operators****\n");
   printf("\t\t\t+ | - | * | / | \t\t\t\n");
   printf("--------------------------------------------------\n");
   printf("Operator:\t\t");
   operator = fgetc(stdin);

   switch(operator){
      case '+': {	// Addition
         c = a + b;
      }break;
         
      case '-': {	// Subtraction
         c = a - b;
      }break;

      case '*': {	// Multiplication
         c = a * b;
      }break;

      case '/': {	// Division
         c = a / b;
      }break;
         
      default: {	// Invalid
         printf("INVALID OPERATOR! Try again...");
      return -1;
      }break;
   }
   
   printf("%.2f %c %.2f = %.2f", a, operator, b, c);
   
   return 0;
}
