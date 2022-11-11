#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main(void)
{
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






}