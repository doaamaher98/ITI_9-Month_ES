#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main(void)
{
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






}