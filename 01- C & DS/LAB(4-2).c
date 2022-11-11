#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// For Lab(2)
// Declaring the Struct
struct Employee
{
  int code;
  float salary;
  char name[50];
}emp;

void main(void)
{

	// Lab(2) : Recieve one Employee's data : Code,Name,Net Salary
	int Code; float Net; char Name[50];
	// Clearing Buffer
	flushall();
	clrscr();
	// Setting the code to the code element in the structure
	Code = emp.code;
	// Asking the user to enter the code
	printf("Enter the Employee's code : ");
	scanf("%d", &Code);
	// Setting the Name of the Employee
	printf("Enter the Employee's Name : ");
	scanf("%s",&emp.name);
	// Setting the Net to the salary element in structure
	Net = emp.salary;
	printf("Enter his/her Net Salary : ");
	scanf("%f",&Net);
	// Printing the data of Employee
	printf("Code : %d\nName :%s\nNet Salary : %f",Code,emp.name,Net);

	getch();
	clrscr();

 }