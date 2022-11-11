#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Lab(6-3) : A function to make StringCopy from source[array] to Destination[array] like strcpy()

// Declaring the function that returns an address
char* StringCopy (char* destination, char* source);

void main(void)
{
	char src[20];
	char des[20];

	printf("Enter your Source : ");
	scanf("%s",src);


	if (strlen(src) < 20)
	{
	 StringCopy(des,src);
	 printf("Destination StringCopy : ");
	 puts(des);

	}
	else {
	 printf("Wrong Entry!") ;
	}

	getch();
	clrscr();
}

char *StringCopy(char* destination, char* source)
{
	char *Temp = destination; // Creating a pointer to char holds address of destination
	int i;

	while ( (*source != '\0') ) // While the entered text didn't finish
	{
		* destination = * source; // Put source address into destination address

		// Increment Destination & Source addresses
		destination ++; source ++;
	}

	*destination = '\0'; // Destination's end

	return Temp;         // return the pointer to the destination[address]
}