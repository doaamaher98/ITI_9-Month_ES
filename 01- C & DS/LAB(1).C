#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(void)
{
	// Lab(1) Trying different Specifiers
	int x=5;
	int y=10;

	int b;

	char A= 'A';

	char ch;

	float f = 3.1;

	// Clearing Screen
	clrscr();

	printf("\n Integer = %d",x);
	printf("\n Char =  %c",A);
	printf("\n Float = %f",f);
	printf("\n HEX value of %d is %X",y,y);
	printf("\n OCTAL value of %d is %o",y,y);
	printf("\n");
	getch();

	// Lab(2) Getting char from user & converting it to ASCII
	printf("\nType the char to be converted to ASCII : ");
	scanf("%c",&ch);
	printf("ASCII = %d",ch);
	printf("\n");
	getch();

	// Lab(3) Converting Integer value to HEX & OCT value
	printf("Enter your interger value : ");
	scanf("%d", &b);
	printf("Hex value = %x ,Octal value = %o",b,b);
	printf("\n");
	getch();


	// Typing Text
	/*
	printf("Welcome to ITI\n");
	printf("Welcome to BorlandC on DOSBox");
	getch();
	*/
}