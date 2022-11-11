#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main(void)
{
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






}