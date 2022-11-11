#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define MAX_SIZE 	10
#define DATA_TYPE   int

// Lab(11-1) : Stack with all Functionalities on array of integers

// Defining the structure 
typedef struct stack {
	DATA_TYPE elements[MAX_SIZE];  // Array of integers
	int top;                       // Top of stack
}Stack;

/******************* Functions Prototypes *************/
// Initializing the stack
void Init (Stack *ptr_stack);
// Checking if stack is full
int IsFull (Stack *ptr_stack);
// Checking if stack is empty
int IsEmpty (Stack *ptr_stack);
// PUSH
int Push (DATA_TYPE element, Stack *ptr_stack);
// POP
int Pop (DATA_TYPE *ptr_element, Stack *ptr_stack);
// Getting Stack sizeof
int StackSize (Stack *ptr_stack);
// Clearing the Stack
void ClearStack (Stack *ptr_stack);
///////////////////////////////////////////////////////////////////////////
void main (void)
{
    int count = 0; 
	int size = 0;
	
	Stack stack;                 // A variable of type Stack
	Stack *ptr_stack = &stack;   // A pointer to this variable of same type Stack
	
	DATA_TYPE element;                  // A variable for the element in array
	DATA_TYPE *ptr_element = &element;  // A pointer to this variable
	
	
	// Intialize Stack
	Init(ptr_stack);
	
	// Push Data in stack
	Push(1, ptr_stack);
	Push(2, ptr_stack);
	Push(3, ptr_stack);
	Push(4, ptr_stack);
	Push(5, ptr_stack);


	// Check if Stack is full
	if (IsFull(ptr_stack))
	{
		printf("Stack is FULL!");
	}
	else if (IsEmpty(ptr_stack))
	{
		printf("Stack is EMPTY!");
	}
	else
	{
		printf("Stack Size is %d\n", StackSize(ptr_stack));
	}
	printf("=================================\n");
      //	getch();

	// POP elements in the stack [LIFO]
	size = ptr_stack -> top;    // Getting the size of stack
	for (count =0; count <= size ; ++count)
	{
		Pop(ptr_element, ptr_stack);
		printf("Element : %d of index [%d]\n", *ptr_element, StackSize(ptr_stack));
		printf("POPING!\n");
	}
	printf("=================================\n");

	getch();
	clrscr();

}

///////////////////////////////////////////////////
void Init (Stack *ptr_stack)
{
	// Points to top of stack & checks tos to be -1 [Empty] to begin to initialize
	ptr_stack -> top = -1;
}
/////////////////////////////////////////////////////
int IsFull (Stack *ptr_stack)
{
	// If top of stack is N-1 [FULL] , return = 1
	// Otherwise, return 0
	if (ptr_stack -> top == MAX_SIZE -1)
	{
		return 1;              // FULL
	}
	else
	{
		return 0;              // NOT FULL
	}	
}
/////////////////////////////////////////////////////////
int IsEmpty (Stack *ptr_stack)
{
	// Checks if the top of stack == -1 [EMPTY] or not
	// if empty return 1, otherwise terminate return 0
	if (ptr_stack -> top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
////////////////////////////////////////////////////////////
int Push (DATA_TYPE element, Stack *ptr_stack)
{
	// Checks if stack if full, if yes it wont be able to push, so it'll terminate
	if (ptr_stack -> top == MAX_SIZE -1)
	{
		return 0;            // Won't be able to push any item
	}
	else
	{
		ptr_stack -> top++;                                 // Increment the top index
		ptr_stack -> elements[ptr_stack -> top] = element;  // Setting the new item to be inserted at the top of stack

		return 1;                                           // Successful Pushing
	}
}
////////////////////////////////////////////////////////////////////////////////////
int Pop (DATA_TYPE *ptr_element, Stack *ptr_stack)   // Passing by Address
{
	// Checks if Stack wasn't empty to be able to pop an item
	if (ptr_stack -> top == -1)
	{
		return 0;            // Terminate, it's empty stack
	}
	else
	{
		// Assigning *ptr_element to the top of stack
		*ptr_element = ptr_stack -> elements[ptr_stack -> top];
		
		ptr_stack -> top--;  // Decrementing an idex of the top
		
		return 1;
	}
}
////////////////////////////////////////////////////////////////////////////
int StackSize (Stack *ptr_stack)
{
	// Check if stack was empty
	if (ptr_stack -> top == -1)
	{
		return 0;                    // Empty
	}
	else
	{
		return ptr_stack -> top + 1; // Return the stack size (top + 1)
	}
}
//////////////////////////////////////////////////////////////////////////////////
void ClearStack (Stack *ptr_stack)
{
	ptr_stack -> top == -1;
}
