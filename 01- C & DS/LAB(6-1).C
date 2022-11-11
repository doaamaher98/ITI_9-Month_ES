#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Lab(6-1) : Swap function with Calling by Address */

// Function Declaration
void swap (int *x , int *y);


void main(void)
{
	// Declaring the 2 numbers to be swapped
	int num1,num2;
	// Taking the First number from user
	printf("Enter the 1st number : ");
	scanf("%d",&num1);
	// Taking the Second number from user
	printf("Enter the 2nd number : ");
	scanf("%d",&num2);
	// Calling by Address (Passing Address)
	swap(&num1,&num2);
	// Printing the result
	printf("After Swapping :\nNum1 = %d & Num2 = %d",num1,num2);

	getch();
	clrscr();
}

// Swap function with pointer parameters
void swap (int *x , int *y)
{
	int temp;  // Temp value to hold address
	temp = *x; // Temp carries Address of x
	*x = *y;   // Address of x carries Address of y
	*y = temp; // Address of y carries temp
}