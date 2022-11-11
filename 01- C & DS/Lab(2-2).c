#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main(void)
{
	// Lab(2): Taking readings from user and exit if sum>100
	int value, count,end,sum=0;
	// Getting the number of integers the user'll be inserting
	printf("Enter the number of integers you'll insert : ");
	scanf("%d",&end);
	// Getting the integers from the user
	printf(" Enter the Integer values : ");
	// Looping through the number of integers
	for (count=0; count<end; count++)
	{
	   scanf("%d",&value);
	   // Calculating their Sum
	   sum+=value;
	}
	// Checking if Sum exceeded 100 or not
	if (sum>100)
	{
	   printf("You've Exceeded 100!");
	   getch();
	   clrscr();
	}
	else
	{
	   printf("Their Sum = %d",sum);
	}
	getch();
}