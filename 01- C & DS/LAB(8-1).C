#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


// Lab(8-1) : Sequential search (Linear Search) on Array of Integers


void main(void)
{
	int arr[20],i,size,key;
	int foundIndex= -1;
	
	printf("Enter the Array Size : ");
	scanf("%d",&size);
	
	printf("Enter Array Elements : ");
	for (i=0; i<size ;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the Key you are looking for : ");
	scanf("%d",&key);

	for (i=0; i<size; i++)
	{
	   if (arr[i] == key)
	   {
	     foundIndex = i;
	   }
	}

	if (foundIndex > -1)
	{
		printf("Element found at index %d",foundIndex);
	}
	else
	{
	  printf("\nElement is not found!");
	 }

	getch();
	clrscr();
}