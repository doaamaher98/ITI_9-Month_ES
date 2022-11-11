#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <alloc.h>

void main (void)
{
	char ** str ;
	int N,i,size;

	// Scanning number of strings
	printf("Enter the number of Strings : ");
	scanf("%d",&N);
	// Allocation for the number of strings
	str = (char **) malloc(N*sizeof(char*));

	printf("Enter the Size of each strings : ");
	for (i =0; (str != NULL) && i<N ; i++)
	{
		scanf("%d",&size);
		// Allocation of Size of each string
		str[i] = (char *) malloc(size*sizeof(char));
	}
	
	printf("Enter the Strings : \n");
	for (i=0; (str != NULL) && (i<N); i++)
	{
		scanf("%s",str[i]);
	}

	printf("Strings are : \n");
	for (i=0; (str != NULL) && (i<N); i++)
	{
		printf("Str[%d] of size (%d) = %s\n",i,size,str[i]);
	}
	
	// Deallocate memory
	free(str);
	
	getch();
	clrscr();

}