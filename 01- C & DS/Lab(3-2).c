#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{  
	// Lab(2) : Finding MAX & MIN values of an array of numbers
	// Declaring the array size, counter, and max & min variables
	int arr_size, i, max, min;
	// Declaring the Array
	int Arr[10];
	// Scanning Array Size
	printf("Please enter the Array size : \n");
	scanf("%d",&arr_size);
	// Scanning the Array Elements
	printf("Please enter the Elements of the Array : \n");
	// Looping through Array
	for (i=0; i<=arr_size-1 ; i++)
	{
	  scanf("%d",&Arr[i]);
	}
	max = Arr[0];   // Setting the max value to be the first element in array
	// Checking for MAX & MIN values
	for (i=0; i<=arr_size-1; i++)
	{

	  if(Arr[i] > max) // Comparing the first element with the rest
	  {
	    max = Arr[i]; // As Arr[i] is the biggest
	  }
	  else
	  {
	    min = Arr[i]; // As Arr[i] is the smallest
	  }
	}
	printf("Max value in Array is %d\n",max);
	printf("Min value in Array is %d\n",min);
	getch();
	clrscr();
}