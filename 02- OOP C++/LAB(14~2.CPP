#include <iostream.h>

//using namespace std;    

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (14-2) : Stack Class with Overloading Assignment Operator "="

class Stack
{
	private :                       // By default is private
		int top;                    // Indicator to the tos
		int size;                   // Max stack size
		int *ptr;                   // pointer to access elements in stack
		static int counter;

	public :
		int isFull ();                  // Checking if stack is full
		int isEmpty ();                 // Checkig if stack is empty
		static int getCounter ()        // Static function to count the objects
		{
			return counter;
		}
		Stack ()                        // Default Constructor, size = 10
		{
			top =0;
			size = 10;
			ptr = new int[size];        // Allocating stack locations
			counter ++;
		}
		Stack (int n)                   // Default Constructor with stack size n [With 1 parameter]
		{
			top =0;
			size = n;
			ptr = new int[size];        // Allocating stack locations
			counter ++;
		}



	 ~Stack()                        // Destructor
	{
		delete[] ptr;               // Deallocation
		size = 0;
		counter --;
	}

    int Push (int n);
    int Pop (int & n);              // Pass by Reference

	///////////////////////////
	// Assignment operator "="
	Stack& operator = (Stack & c)
	{
		int i;
		top = c.top;
		size = c.size;
		// Deallocate the new stack first before equation
		delete [] ptr;
		// Allocate now
		ptr = new int[size];
		// Place the stack elements in new stack
		for (i=0; i<top; i++)
			ptr[i] = c.ptr[i];
	}

};

/////////////////////////////////////////////
int Stack::isFull()
{
    return (top == size);
}

int Stack::isEmpty()
{
    return (top==0);
}

int Stack::Push(int n)
{
    // Checks if stack is full
    if (isFull())
	{
	return 0;
    }

    ptr[top] = n;
    top ++;

    return 1;
}

// Static variable initialization
int Stack::counter =0;

int Stack::Pop(int & n)
{
    // Checks if Stack is Empty
    if (isEmpty())
	{
	return 0;
    }

    top--;
    n = ptr[top];

    return 1;
}
/////////////////////////////////////////////
int main()
{
    int num;
    Stack s1(10), s2(10);

	s1.Push(1);
	s1.Push(2);
	s1.Push(3);
	s1.Push(4);

	// Assignment operator "="
	s2 = s1;

	// Both pops of s1 & s2 will print the same value "4"
	s2.Pop(num);
	cout << "s2 poped num is = "<< num << endl;

	s1.Pop(num);
	cout<<"s1 poped num is = "<< num << endl;

    getch();
	////////////////////////////////////////

    clrscr();

    return 0;
}