#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{       /*
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
	*/

	/*
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
	*/


	// Lab(3) : 3x4 Matrix, Read it from user, find sum of each row & avg of each column
	// Declaring the Matrix of given Rows & Cols
	int Matrix[3][4];
	// Declaring i,j = rows,cols -- and sum for each & average value
	int i,j,sum=0,sum2=0,avg=0;
	// Taking the Matrix from the user
	printf("Enter the [3x4] Matrix : \n");
	// Looping through Matrix to place values (rows & cols)
	for (i=0; i<3 ; i++)
	{
	  for (j=0 ; j<4 ; j++)
	  {
	    scanf("%d",&Matrix[i][j]);
	  }
	}
	// To get sum of rows from (rows to cols)_
	for (i=0; i<3; i++)
	{
	  for (j=0; j<4 ; j++)
	  {
	    sum +=Matrix[i][j]; // Sum of whole Matrix
	  }
	 printf("Sum of Row (%d) = %d\n",i,sum);  // Sum of rows
	 sum=0;                                   // To start from 0
	}

	printf("**************************\n");

	// To print the Average of cols from (cols to rows)
	for (j=0; j<4 ; j++)
	{
	  for (i=0; i<3 ; i++)
	  {
	    sum2+=Matrix[i][j];  // Sum of whole Matrix
	  }
	  avg = sum2/3;        // Avg is the total sum of Matrix / no. of elements
	  printf("Average of Col(%d) is = %d\n",j,avg);
	}
	getch();
	clrscr();

}