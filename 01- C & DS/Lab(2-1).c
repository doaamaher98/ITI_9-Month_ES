#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


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