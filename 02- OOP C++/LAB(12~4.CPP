#include <iostream.h>

//using namespace std;    

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (12-3) : Stack class Example

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

    int push (int n);
    int pop (int & n);              // Pass by Reference
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

int Stack::push(int n)
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

int Stack::pop(int & n)
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
    Stack s1(5);
	cout<<"Number of objects created = "<< Stack:: getCounter()<<endl;
    
    Stack s2(5), s3(6);
    cout<<"Number of objects created = "<< Stack:: getCounter()<<endl;
    
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    if (s1.pop(num)) {
        cout<<num<<endl;         // Poping the last inserted item 5
    }

    if (s1.pop(num)) {
	cout<<num<<endl;         // Poping the last inserted item 4
    }

    if (s1.pop(num)) {
        cout<<num<<endl;         // Poping the last inserted item 3
    }

    if (s1.pop(num)) {
        cout<<num<<endl;         // Poping the last inserted item 2
    }

    if (s1.pop(num)) {
        cout<<num<<endl;         // Poping the last inserted item 1
    }

    if (s1.pop(num)) {
        cout<<num<<endl;         // Empty
    }

    cout<<"Stack is Empty!"<<endl;
    
    getch();
    clrscr();

    return 0;
}