#include <iostream.h>

//using namespace std;    

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (15-1) : Rectangle,Point,Line & Circle classes as strong association [Composition]

// Class Point
class Point 
{
	private :
		int x;
		int y;

	public :
		Point () : x(0), y(0)				// Default Constructor with no parameters
		{
			cout<<"Point Default Constructor with 0 parameters"<<endl;
		}
		Point (int m) : x(m),y(m) 				// Constructor with 1 parameter
		{
			cout<<"Point Constructor with 1 parameter"<<endl;
		}
		Point (int m, int n) : x(m), y(n)			// Constructor with 2 parameters
		{
			cout <<"Point Constructor with 2 parameters"<<endl;
		}

		~Point ()							// Point Destructor
		{
			cout<<"Point Destructor is calling"<<endl;
		}

		// Member functions
		void SetX (int m)
		{
			x=m;
		}
		void SetY (int n)
		{
			y=n;
		}
		void SetXY (int m, int n)
		{
			x=m;
			y=n;
		}
		int getX ()
		{
			return x;
		}
		int getY ()
		{
			return y;
		}
		// Print Method
		void Print()
		{
			cout << "Point Data are x: "<< x <<" and y : "<<y<<endl;
		}
};
////////////////////////////////////////////////////////
// Class Line
class Line
{
	private :
		Point start;
		Point end;

	public :
		Line() : start(0), end(0)                     // Default Constructor with 0 parameters
		{
			//start.setXY (0,0);
			//end.setXY (0,0);
			cout << "Line default Constructor with 0 parameters"<<endl;
		}
		Line (int x1, int y1, int x2, int y2) : start(x1,y1), end(x2,y2)
		{
			//start.setXY(x1,y1);
			//end.setXY(x2,y2);
			cout << "Line Constructor with 4 parameters"<<endl;
		}
		~Line ()                              // Destructor
		{
			cout << "Line Destructor is calling"<<endl;
		}
		// Print Method
		void Print ()
		{
			cout<<"Start : ";
			start.Print();
			cout <<"End : ";
			end.Print();
		}
};
////////////////////////////////////////////////////////
// Class Circle
class Circle
{
	private :
		Point center;
		int rad;

	public :
		Circle() : center(0),rad(0)             // Default Constructor with 0 parameter
		{
			cout<<"Circle Default Constructor with 0 parameter"<<endl;
		}
		Circle (int x1, int y1, int r) : center(x1,y1), rad(r)
		{
			cout << "Circle Constructor with 3 parameters "<<endl;
		}
		// Destructor
		~Circle ()
		{
			cout << "Circle Destructor is calling"<<endl;
		}
		// Print Method
		void Print ()
		{
			cout<<"Center : ";
			center.Print();
			cout<<"Radius : "<< rad << endl;
		}
};
/////////////////////////////////////////////////////////////////
// Class Rectangle
class Rectangle
{
	private :
		Point UL;
		Point LR;
	public :
		Rectangle (): UL(0),LR(0)                  // Default Constructor
		{
			cout<< "Rectangle Default Constructor with 0 parameter" <<endl;
		}
		Rectangle (int x1, int y1, int x2, int y2) : UL(x1, y1), LR(x2, y2)
		{
			cout << "Rectangle Constructor with 4 parameters "<<endl;
		}
		// Destructor
		~Rectangle()
		{
			cout<<"Rectangle Destructor is calling"<<endl;
		}
		// Print Method
		void Print()
		{
			cout << "Upper Left points: "<<endl;
			UL.Print();
			cout << "Lower Right points: "<<endl;
			LR.Print();
		}
};
///////////////////////////////////////////////////////////////////////

int main()
{
	// Creating an object from Line class with 4 parameters
	Line l1 (1,2,3,4);
	// Creating an object from circle class with 3 parameters
	Circle c1 (100,150,200);
	// Creating an object from Rectangle class with 4 parameters
	Rectangle r1 (10,20,30,40);

	getch();  clrscr();
	cout<<endl;

	// Printing
	cout<<"Line Class Print : "<<endl;
	l1.Print();           cout<<endl;        getch();
	cout<<"Circle class Print : "<<endl;
	c1.Print();           cout<<endl;        getch();
	cout<<"Rectangle class Print : "<<endl;
	r1.Print();           cout<<endl;        getch();



	clrscr();

	return 0;
}