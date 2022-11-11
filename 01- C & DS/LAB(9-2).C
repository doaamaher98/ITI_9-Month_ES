#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Lab(9-2) : Selection sort on array of strings

// Function Declaration for swapping array of strings
void SelectionSort(char arr[][10], int n);

void main(void)
{
	char array[][10] = {"ABC", "abc", "AbC"}; // intializing 2D array
	int i;

	printf("Before Sorting \n");
	for (i = 0; i < 3; i++)
	{
		printf("[%d]: %s \n", i, array[i]);
	}
	
	// Calling Selection function
    SelectionSort(array,3);

    printf("After Sorting \n");
    for (i = 0; i < 3; i++)
	{
        printf("[%d]: %s \n", i, array[i]);
	}
	
	getch();
	clrscr();
}

// Selection Sorting function for Strings
void SelectionSort(char arr[][10], int n)
{
    int i, j, min_index;
  
    // Creating an array of strings to carry the min string in the original array
    char min_string[10], temp[10];
	
	// Looping through array 
    for (i = 0; i < n-1; i++)
    {
        // Finding minimum element in unsorted array of strings
        int min_index = i;
		// Assigning the arr[i] as the first element in min_string
        strcpy(min_string, arr[i]);
		// Second loop of strings' size
        for (j = i+1; j < n; j++)
        {
            // If min is greater than arr[j]
            if (strcmp(min_string, arr[j]) > 0)
            {
                // Make arr[j] as min_string
                strcpy(min_string, arr[j]);
				// Updating min_index to be j
                min_index = j;
            }
        }
  
        // Swap the found minimum element with the first element
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_index]);
            strcpy(arr[min_index], temp);  
    }
}