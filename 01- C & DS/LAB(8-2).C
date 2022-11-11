#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
// Lab (8-2) : Linear Search on array of employees [BY CODE & BY NAME]

int SearchbyCode (int * arr, int size, int code);

int SearchbyName (char *arr, int size, char target[50]);

struct Employee {
		char Name[50];
		int Code[50];
}emp;


void main(void)
{
	struct Employee emp;

	int i,s,id;
	char nam [50];
	int FoundKEY=-1, FoundKEY2= -1;

	printf("Enter the Array Size : ");
	scanf("%d",&s);

	for (i=0; i<s; i++)
	{
		printf("Enter Employee's [%d] ID : ",i);
		scanf("%d",&emp.Code[i]);
	}

	for (i=0; i<s; i++)
	{
		printf("Enter Employee's [%d] Name : ",i);
		scanf("%s",&emp.Name[i]);
	}

	printf("Enter ID to be searched : ");
	scanf("%d",&id);

	FoundKEY = SearchbyCode(emp.Code,s,id);

	if (FoundKEY > -1)
	{
		printf("Code is found at index %d", FoundKEY);
	}
	else
	{
		printf("ID Code isn't found!");
	}

	printf("\nEnter Name to be searched : ");
	scanf("%s",nam);

	FoundKEY2 = SearchbyName (emp.Name, s, nam);

	if (FoundKEY2 >0)
	{
	 printf("Name is found at index : %d",FoundKEY2);
	}
	else
	{
	 printf("Cant find name");
	}

	getch();
	clrscr();
}

int SearchbyCode (int * arr, int size, int code)
{
	int i, foundIndex =-1;

	for (i=0 ; i<size ; i++)
	{
		if (arr[i] == code)
		{
			foundIndex = i;
			return foundIndex;
		}
	}
	return 0;
}


int SearchbyName (char *arr, int size, char target[50])
{
	int i;

	for (i=0; i<size; i++)
	{
	 printf("%s\n",arr[i]);
	 if (strcmp(target, &arr[i]) == 0)
	  {
	     return i;
	  }
	 }
	  return -1;
}
