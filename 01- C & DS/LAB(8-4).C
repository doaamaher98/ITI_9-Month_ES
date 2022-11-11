#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Lab(8-4) : Binary Search on array of strings

void main (void)
{
	char array[3][20], str[20];

	int i, high=2, low=0, mid, found=0;

	printf("Enter the Array of 3 strings in Ascending Order : ");
	for (i=0 ; i<3 ; i++)
	{
		scanf("%s",&array[i]);
	}

	printf("Enter the Key you want to find : ");
	scanf("%s",str);

	while (low <= high && !found)
	{
		mid = (low + high)/2;
		
		if (strcmp (str,array[mid]) > 0)
		{
			low = mid +1;
		}
		else if (strcmp (str,array[mid]) < 0)
		{
			high = mid - 1;
		}
		
		else if (strcmp (str,array[mid]) == 0)
		{
			found =1;
		}

	}
	if(found)
	{
		printf("key found at the position %d\n",mid);
	}
	else {
		printf("NOT FOUND");
	}
	getch();
	clrscr();
}