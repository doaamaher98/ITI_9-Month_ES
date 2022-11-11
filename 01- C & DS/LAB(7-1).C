#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include <alloc.h>

// Lab(7-1): Make an array of Employees with determined size at run-time from the user and read
//         it's data (ID,Sal) for each one.

typedef struct Employee {
	char Name[50];
	int ID;
	int Salary;
}emp;


void main (void)
{
	// Pointer to struct
	emp *ptr;
	// Declaring the  variables
	int size,n,i;
	// Asking user for the size to reserve
	printf("Enter the size of bytes you want to reserve : ");
	scanf("%d",&size);
	// Allocating memory and returning the first byte's address into pointer
	ptr = (emp *) malloc (size * sizeof(emp));
	
	// Scanning Number of Employees
	printf("Enter Number of Employees : ");
	scanf("%d", &n);
	
	// Scan the Name
	printf("Enter the Name : ");
	for(i=0; (ptr != NULL) && (i<n) ; i++)
	{
		scanf("%s",&ptr[i].Name);
	}

	// Scan the ID
	printf("Enter the ID : ");
	for(i=0; (ptr != NULL) && (i<n) ; i++)
	{
		scanf("%d",&ptr[i].ID);
	}

	// Scan the Salary
	printf("Enter the Salary : ");
	for(i=0; (ptr != NULL) && (i<n) ; i++)
	{
		scanf("%d",&ptr[i].Salary);
	}

	// Printing data
	printf("The Employee's Data: \n");
	for (i=0; (ptr != NULL)&& (i<n) ; i++)
	{
		printf("Employee[%s], ID: %d & Salary : %d\n",ptr[i].Name, ptr[i].ID, ptr[i].Salary);
	}

	// Freeing the Allocations
	free(ptr);
	getch();
	clrscr();
}