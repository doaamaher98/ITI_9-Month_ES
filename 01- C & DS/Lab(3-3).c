#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main(void)
{
// Lab(3) : 3x4 Matrix, Read it from user, find sum of each row & avg of each column
	// Declaring the Matrix of given Rows & Cols
	int Matrix[3][4];
	// Declaring i,j = rows,cols -- and sum for each & average value
	int i,j,sum=0,sum2=0,avg=0;
	// Taking the Matrix from the user
	printf("Enter the [3x4] Matrix : \n");
	// Looping through Matrix to place values (rows & cols)
	for (i=0; i<3 ; i++)
	{
	  for (j=0 ; j<4 ; j++)
	  {
	    scanf("%d",&Matrix[i][j]);
	  }
	}
	// To get sum of rows from (rows to cols)_
	for (i=0; i<3; i++)
	{
	  for (j=0; j<4 ; j++)
	  {
	    sum +=Matrix[i][j]; // Sum of whole Matrix
	  }
	 printf("Sum of Row (%d) = %d\n",i,sum);  // Sum of rows
	 sum=0;                                   // To start from 0
	}

	printf("**************************\n");

	// To print the Average of cols from (cols to rows)
	for (j=0; j<4 ; j++)
	{
	  for (i=0; i<3 ; i++)
	  {
	    sum2+=Matrix[i][j];  // Sum of whole Matrix
	  }
	  avg = sum2/3;        // Avg is the total sum of Matrix / no. of elements
	  printf("Average of Col(%d) is = %d\n",j,avg);
	}
	getch();
	clrscr();

}