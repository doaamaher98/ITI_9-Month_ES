#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Lab(3)
struct Employee
{
  char name[50];
  int salary;
}emp[5];


void main(void)
{
	// Lab(3): Recieving data into an array of 5 employees and displaying net & salary for each
	struct Employee emp[5];
	int i; int j;

	printf("Enter the Names of the Employees : \n");
	for (i=1; i<=5; i++)
	{
	  scanf("%s",&emp[i].name);
	}

	printf("Enter each one's Salary : ");
	for(i=1 ; i<=5 ; i++)
	{
	  scanf("%d",&emp[i].salary);
	}

	// Printing out the data
	for (i=1; i<=5; i++)
	{
	  printf("Name of Employee (%d) is %s ",i, emp[i].name);
	  printf ("Salary is : %d \n",emp[i].salary);

	}
	getch();
	clrscr();
}
