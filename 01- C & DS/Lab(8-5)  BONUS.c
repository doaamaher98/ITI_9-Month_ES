#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#define ARR_SIZE	3

typedef struct
{
	char 	REAL_PART[10];
	char 	COMPLEX_PART[10];
} Number_Struct;

int LinearSearch(Number_Struct *PTRtoARR, char *Copy_Local_RealPartNUM,char * Copy_Local_COMPPartNUM);

int main(void)
{
	Number_Struct 	Local_ARRNumbers[ARR_SIZE]={{"105","30"},{"100","25"},{"101","30"}};
	char 			Local_Counter=0;
	char 			Local_KeyIndex=0;
	char			Local_RealPartNUM[10]={0};
	char			Local_COMPPartNUM[10]={0};
	
	system("cls");
	printf("Enter Real part of Number You Want to Find\n");
	scanf("%s",Local_RealPartNUM);
	printf("Enter Complex part of Number You Want to Find\n");
	scanf("%s",Local_COMPPartNUM);
	
	Local_KeyIndex = LinearSearch(Local_ARRNumbers,Local_RealPartNUM,Local_COMPPartNUM);
	if(Local_KeyIndex==-1)
		printf("Not found ! ");
	else
		printf("Found in index : %d ",Local_KeyIndex+1);
	getch();
	return 0;
}
int LinearSearch(Number_Struct *PTRtoARR,char *Copy_Local_RealPartNUM,char * Copy_Local_COMPPartNUM)
{
	char 	Local_Counter=0;
	int 	Local_Flag=0;
	
	for(Local_Counter=0;Local_Counter<ARR_SIZE;Local_Counter++)
	{
		Local_Flag = strcmp(PTRtoARR[Local_Counter].REAL_PART, Copy_Local_RealPartNUM);
		if(Local_Flag==0)
		{
			Local_Flag = strcmp(PTRtoARR[Local_Counter].COMPLEX_PART, Copy_Local_COMPPartNUM);
			if(Local_Flag==0)
				return Local_Counter;
		}
	}
	return -1;
	
}