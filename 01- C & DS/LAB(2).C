#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void main(void)
{
	// Lab(1): Magic Box Algorithm
	int col,row,N,count,Total;

	clrscr();

	printf("Enter the Size of Magic box : \n"); // Must be Odd
	scanf("%d",&N);
	Total = N*N;

	clrscr();
	// Looping through the box
	for(count=1; count<= Total ;count++)
	{

	  if (count == 1)  // The first number is at row(1), col(2)
	  {
	    row = 1 ;
	    col = (N+1)/2 ; // Or (N+1)/2 = 2 as N is always Odd
	  }

	  else if((count-1) %N == 0) // If the number doesn't have a remainder, row++ & col is const
	  {
	    row++;
	  }
	  else if((count-1) %N != 0) // If the number does have a remainder, row-- & col--
	  {
	    row--;
	    col--;

	  if (row == 0)    // At beginning
	     { row = N; }
	  if (col == 0)    // At beginning
	     { col = N; }
	   }

	gotoxy(col*3,row*3);
	printf("%d",count);


	getch();
	}

	getch();
}
/*
void gotoxy(int col,int row)
{
  COORD coord;
  coord.X = col;
  coord.Y = row;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
*/
	/*
	// Lab(2): Taking readings from user and exit if sum>100
	int value, count,end,sum=0;
	// Getting the number of integers the user'll be inserting
	printf("Enter the number of integers you'll insert : ");
	scanf("%d",&end);
	// Getting the integers from the user
	printf(" Enter the Integer values : ");
	// Looping through the number of integers
	for (count=0; count<end; count++)
	{
	   scanf("%d",&value);
	   // Calculating their Sum
	   sum+=value;
	}
	// Checking if Sum exceeded 100 or not
	if (sum>100)
	{
	   printf("You've Exceeded 100!");
	   getch();
	   clrscr();
	}
	else
	{
	   printf("Their Sum = %d",sum);
	}
	getch();
	*/

	/*
	// Lab(3): Selecting a choice of the 3 choices & printing it's word
	int choice;
	printf("********** Welcome ***********\n");
	printf("Select a choice from the 3 choices!\n");
	printf("Choice : ");
	// Scanning the Choice number
	scanf("%d",&choice);
	// Checking all the 3 choices cases to print the correct statement
	switch (choice)
	{
	  case 1:
	  printf("This is the FIRST choice");
	  getch();
	  break;

	  case 2:
	  printf("This is the SECOND choice");
	  getch();
	  break;

	  case 3:
	  printf("This is the THIRD choice");
	  getch();
	  break;

	  // A default value when the user mistakes the choice number
	  default :
	  printf("NONE OF THE CHOICES");
	  getch();

	}
	clrscr();
	*/



	/*
	// Lab(4): Multiplication Table from 1-10
	int count, mul=1, value=1;
	printf("The Multiplication Table from 1-10 is : \n");

	for (count=1; count<=10; count++)
	 {
	  for (value=1; value<=10; value++)
	  {
	     mul= count*value;
	     printf("%d x %d = %d\n",count,value,mul);
	  }
	     printf("**************************\n");
	     getch();
	  }
	getch();
	*/



	/*
	// Lab (5) : Doing the same but in Reverse
	int count,mul=1, value=1;

	printf("The Multiplication Table of 10-1 is : \n");

	for (count =10; count>=1; count--)
	{
	  for(value=10; value>=1; value--)
	  {
	    mul = value * count;
	    printf("%d x %d = %d\n",count,value,mul);
	  }
	  printf("**************************\n");
	  getch();
	}
	getch();
       */
//}