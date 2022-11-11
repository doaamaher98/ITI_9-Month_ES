#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Data {
   char Name[30];
   int sal[20];
   int num;
}emp;

void Data_Entry (char name[30], int salary[20], int n);
void Data_Print (char name[30], int salary[20], int n);



void main(void)
{
    struct Data emp;

  // Number or Employees
  printf("Please Enter How many Employees: ");
  scanf("%d",&emp.num);

  // Scanning Names and Salaries
  printf("Please Enter Names & Salaries:\n");
  Data_Entry(emp.Name, emp.sal, emp.num);  // Passing Arguments

  printf("Names & Salaries :\n");
  Data_Print(emp.Name, emp.sal, emp.num); // Passing Arguments

  getch();
  flushall();
  clrscr();

}

void Data_Entry (char name[30] ,int salary[20], int n)
{
   int i;
   // Read Employee's data
   for (i=0 ; i<n; i++)
  {
    scanf("%s",name[i]); // Scan the array of chars with address "&"
    scanf("%d",&salary[i]);
  }
}

void Data_Print (char name[30], int salary[20], int n)
{
  int i ;
  // Print Employee's data
  for (i=0; i<n; i++)
  {
    printf("Name : %s  with Salary  : %d \n", name[i], salary[i]);

  }
}
