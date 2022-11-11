#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// For Lab(1)

// EXTENDED KEYS == NULL
#define UP     0x48   // UP
#define DOWN   0x50   // DOWN

#define HOME   0x47
#define END    0x4F

// NORMAL KEYS
#define  ENTER  0xD
#define  ESC    0x1B

// Attributes [Coloring the screen]
#define NORMAL_ATT    0x07
#define HIGHLIGHT_ATT 0x70

// On Menu
#define New 	 0
#define Display  1
#define Exit	 2


void main(void)
{
	// Lab (1) : Write a program to Display Menu to the user with 3 options : New, Display,Ezit
	// Display a message for each option, if exit/esc on keyboard were chosen, terminate the program

	char Menu [3][10] = {"New","Display","Exit"};
	// Flag for Termination
	int terminate = 0;
	// Intial Row & Column Places
	int row = 10; int col = 25;
	// Position of selected item [Cursor]
	int pos = 0;
	// Counter
	int i;
	// Key pressed by user [EXTENTED or NORMAL]
	char key;

	do
	{
	  clrscr();
	  flushall();
	  // 1- Drawing the menu with the current selected item (highlighted)
	  // 2- Read the Pressed key from the user
	  // 3- Take the suitable Action depends on the pressed key

	  // (1)
	  for (i=0; i<3; i++)  // Options
	  {
	    gotoxy(col,row+2*i);
	    if (i == pos)
	    {
	      textattr(HIGHLIGHT_ATT); // Highlight the cursor option
	    }
	    cprintf("%s",Menu[i]);    // Print the Option
	    textattr(NORMAL_ATT);     // Don't highlight other options
	  }
	  // (2) : Get value from user and store it at key
	  key = getch();

	  switch(key)  // Check it if it's Extended ASCII or Normal
	  {
	    case NULL : // One of Extended Keys -> Stored in 2B, 1B is NULL, 2nd is Code
	    // END - HOME - UP - DOWN
	    key = getch(); // Get it
	    switch(key)
	    {
	      case UP:
	       pos --;
	       if (pos < 0 )
	       {
		pos = 2; // Go from END
	       }
	       break;

	       case DOWN :
		pos ++;
		if (pos > 2)
		{
		 pos = 0; // Go UP
		}
		break;

	       case HOME :
		// Already in first
		pos = 0;
		break;

	       case END :
		// Already Last
		pos = 2;
		break;
	     }
	    break;

	    case ENTER : // Normal Key, Depends of pos, it'll do a specific task
	     switch (pos)
	     {
	       case 0:
		clrscr();
		printf("This is the NEW Screen");
		getch();
		break;

	       case 1:
		clrscr();
		printf("This is the DISPLAY Screen");
		getch();
		break;

	       case 2:
		 clrscr();
		 printf("This is the EXIT!");
		 getch();
		 terminate =1;
		break;
	     }
	     break;

	    case ESC :  // Terminates the program
	      terminate =1;
	  }

	} while (!terminate);
}