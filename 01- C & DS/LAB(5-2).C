#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Function Declaration
int Rec_Power(int b, int p);

void main()
{
   int base,power,val;
   printf("Enter the Base : ");
   scanf("%d",&base);
   printf("Enter the Power : ");
   scanf("%d",&power);

   val = Rec_Power(base,power); // Passing Arguments to function & assigning it to val
   // Printing the result val
   printf("Value = %d",val);

   getch();
   clrscr();

}

/* Recursive Function to get the power of a number with 2 parameters  */
int Rec_Power (int b, int p)
{
   if (p == 1)   // If the value was to the power =1
   {
    return b;    // It equals itself.
   }
   return Rec_Power(b*b,p-1) ;      // Return to same func with subtracting 1 from power
}
