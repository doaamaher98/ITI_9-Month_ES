#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Lab(6-2) : Function to read array from user & Function to print it

// Use Pointers to pass Array to Function

// Functions Declarations
void ReadArr (int *ptr, int size);
void PrintArr (int *ptr , int size);

void main(void)
{
	int arr[20], size;
	
	// Taking the size of array 
	printf("Enter the size of the Array : ");
	scanf("%d",&size);
	
	// Reading Array 
	printf("Enter the Array Elements : ");
	ReadArr (arr,size); // Pass by Address of array (1st element) & size

	// Printing out the Array
	printf("The Array : \n");
	PrintArr(arr, size); // Pass by Address of array (1st element) & size

	getch();
	clrscr();
}

void ReadArr (int *ptr, int size)
{
	int i;
	for (i=0 ; i<size ; i++)
	{
		scanf("%d",&ptr[i]); // Scanning the array elements
	}
}

void PrintArr (int *ptr , int size)
{
	int i;
	for (i=0; i<size ; i++)
	{
		printf("Element (%d) : %d\n",i, ptr[i]);
	}
}