#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Lab(9-1) : Selection sort on array of integers

// 2 Functions declarations : for swapping & sorting
void swap(int *a, int *b);
void SelectionSort(int *arr, int n);

void main(void)
{
	int array[] = {14,33,27,10,35,19,42,44}; // intializing array
	int i;
	// Calling Selection sort function with passing it it's parameters
	SelectionSort(array, 8);

	// Priting out the sorted array
	printf("Sorted array: \n");
	for (i=0; i < 8; i++)
	{
	    printf("%d ", array[i]);
	}

	getch();
	clrscr();
}

// Swapping function
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Selection Sorting function
void SelectionSort(int *arr, int n)
{
	int i, j, min_index;

	// Looping through the whole array
	for (i = 0; i < n-1; i++)
	{
		// Assigning the first index to intially be the first
		min_index = i;
		// Another loop to sort in the 2nd part of array to sort it[for other passes]
		for (j = i+1; j < n; j++)
		{
			// if there's a smaller value than the first index element, then it'll be the min index
			if (arr[j] < arr[min_index])
				min_index = j;
		}

		// Swapping the minimum element found with the first
		swap(&arr[i], &arr[min_index]);
	}
}

