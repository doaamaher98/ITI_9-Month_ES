#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{       
	// Lab (1): Taking Array from user and printing it
	// Declaring the array size & the intial counter
	int arr_size, i;
	// Intializing the Array first size
	int arr[10];
	// Taking the Array size from the user
	printf("Enter the Size of your Array : ");
	scanf("%d",&arr_size);
	// Taking the Array Elements from the user
	printf("Enter your Array Elements : ");
	// First loop for scanning
	for (i=0;i<=arr_size-1 ; i++)
	{
	  scanf("%d",&arr[i]);
	}
	// Printing out the array
	printf("Your Array is : \n");
	// Second loop for printing
	for (i=0; i<=arr_size-1 ; i++)
	{
	  printf("%d ",arr[i]);
	}
	getch();
	clrscr();
}