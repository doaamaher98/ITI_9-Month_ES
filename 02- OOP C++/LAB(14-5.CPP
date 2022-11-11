#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (14-5) : Function operator overloading on class point to set xy coordinates to point

class Point
{
	private :
		int x;
		int y;

	public :
		Point();                     // Constructor with no parameters
		Point (int a, int b)       // Constructor with 2 parameters
	       {
		 x=a;
		 y=b;
	       }

	       //	~Point();

		// Function operator to set xy coordinates
		void operator () (int a, int b)
		{
			x=a;
			y=b;
		}

		// Function to type the points
		void Print()
		{
			cout << "Point x is " <<x << " & Point y is " <<y<<endl;
		}
};


int main()
{
	Point p(10,20);

	cout << "P data is :  "<<endl;
	p.Print();

	getch();
	clrscr();

	return 0;
}