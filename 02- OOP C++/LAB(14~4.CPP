#include <iostream.h>

//using namespace std;    

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (14-4) : Array operator overloading

class MyArray
{
	private :                       // By default is private

		int size;                   
		int *data;                   

	public :
		MyArray (int size)               // Constructor
		{
			this ->size = size;
			data = new int[size];
		}
	
		~MyArray()                       // Destructor to de-allocate
		{
			delete [] data; 
		}
	
		// Array Operator to initialize the array
		int & operator [] (int index)
		{
			if (index < size)
			{
				return data[index];
			}
			else 
			{
				cout << "Array out of boundaries exception";
				exit(1);
			}
		}
};

/////////////////////////////////////////////
int main()
{
	int i;
    MyArray arr(10);
	
	// Scanning the array
	cout<< "Enter your array elements : "<<endl;
	for (i=0; i<10; i++)
		cin>> arr[i];

	cout<<"Your array elements are : "<<endl;
	// Printing the array
	for (i=0; i<10; i++)
		cout << " "<< arr[i];

    getch();
    clrscr();

    return 0;
}