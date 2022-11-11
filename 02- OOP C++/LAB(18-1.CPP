#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (18-1) : Stack class with Templetes

template <class T>
class Stack
{
	private :                       // By default is private
		int top;                    // Indicator to the tos
		int size;                   // Max stack size
		T *ptr;                   // poTer to access elements in stack
		// MUST HAVE A COPY CONSTRUCTOR!
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
	 ptr = new T[size];        // Allocating stack locations
	 counter ++;
	 cout << "Stack Default Constructor" <<endl;
	}

	 Stack (int n)                   // Default Constructor with stack size n [With 1 parameter]
	{
	 top =0;
	 size = n;
	 ptr = new T[size];        // Allocating stack locations
	 counter ++;
	}
     
    ~Stack()                        // Destructor
    {
	delete[] ptr;               // De-allocation
	size = 0;
	counter --;
	cout<<"Stack Destructor"<<endl;
    }
	
	// Copy Constructor and passing it the reference of the object from the same class Stack
	Stack (Stack & s);
    int push (T n);
    int pop (T  &n);              // Pass by Reference
	
	// Creating an assignment operator
	Stack & operator = (Stack &s);
	
    friend void ViewContent (Stack s); // A friend function to view content of stack without poping data
   // By reference [no extra Destructor call]
    // Copy Constructor
};
/////////////////////////////////////////////
template <class T>
Stack<T>::Stack (Stack<T> & s)
{
    int i ;
    top = s.top;
    size = s.size;
    // Memory Allocation
    ptr = new T[size];
    // Copying the object
    for (i=0 ; i< top ; i++)
    {
     ptr[i] = s.ptr[i];
    }
	counter ++;
}
 //////////////////////////////////////////
template <class T>
int Stack<T>::isFull()
{
    return (top == size);
}

template <class T>
int Stack<T>::isEmpty()
{
    return (top==0);
}

template <class T>
int Stack<T>::push(T n)
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

template <class T>
int Stack<T>::pop(T & n)
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

// Static variable initialization outside of class as it's static
template <class T>
int Stack<T>::counter =0;
///////////////////////////////////////////////////////////////
template <class T>
void ViewContent (Stack<T> s) // By reference (no extra Destructor call)
{
	int i;
	for (i=0 ; i<s.top ; i++)
	{
		cout << "Element " << i << "= " << s.ptr[i]<<endl;
	}
}

// Creating an assignment operator
template <class T>
Stack<T> & Stack<T> :: operator = (Stack<T> &s)
{
	int i;

	if (ptr)
	{
		delete [] ptr;
	}
	top  = s.top;
	size = s.size;

	ptr = new T[size];

	for (i=0;i<top;i++)
	{
		ptr[i] = s.ptr[i];
	}
	return *this;
}
/////////////////////////////////////
int main()
{
    int num;
    char ch;
    // Creatin s1 object from stack class of type int
    Stack<int> s1(5);
    cout<< "Number of integer stacks is : "<< Stack<int>::getCounter()<<endl;

    // Adding more integer data in stack
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    // Displaying stack's elements
    cout<<"Stack Elements : "<<endl;
    ViewContent(s1);

    // Poping num of type int
    s1.pop(num);
    cout<<"After Popint 1 element : "<<endl;
    ViewContent(s1);

    getch();  clrscr();
    // Create another object of type char
    Stack<char> s2;
    cout<< "Number of chars in Second stack : "<<Stack<char>::getCounter()<<endl;
    // Adding to second stack
    s2.push('a');
    s2.push('b');
    s2.push('c');
    cout<<"Elements of string stack are : "<<endl;
    ViewContent(s2);
    // Poping
    s2.pop(ch);
    cout<<"Elements of string stack after poping : "<<endl;
    ViewContent(s2);

    getch();
    clrscr();

    return 0;
}
