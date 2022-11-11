#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Lab(9-3) : Bubble Sort on array of integers
// Defining N as the number of integers
#define N 8

// Function Declarations of swapping and BubbleSort 
void swap (int *a , int *b);
void BubbleSort (int * arr, int size);

void main (void)
{
	int array[N] = {1,12,8,17,28,15,18,11};
	int i;
	
	printf("Before Sorting \n");
	for (i = 0; i < N; i++)
	{
		printf("[%d]: %d \n", i, array[i]);
	}
	
	// Calling the function
	BubbleSort(array,N);
	
	printf("After Sorting \n");
    for (i = 0; i < N; i++)
	{
        printf("[%d]: %d \n", i, array[i]);
	}
	
	getch();
	clrscr();
}

void swap(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort (int * arr, int size)
{
	int i,j=0, sorted=0;
	
	// While it's not sorted
	while (!sorted)
	{
		// Raise the sorted flag to be = 1
		sorted=1;
		// Loop through Array to begin the sort
		for (i=0; i<N; i++)
		{
			if (arr[i] > arr[i+1])
			{
				swap(&arr[i],&arr[i+1]);
				sorted =0;
			}
		}
		// Move to the next integer
		j++;
	}
}