#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (17-1) : Geoshape Example
// 1- Public    Inheritance : violate square & circle constraints by calling the inherited setter methods
// 2- Protected Inheritance : not able to violate square & cicle constraints
// 3- Add a new setter functions to class square & circle

// Parent class "Geoshape"
class Geoshape
{
	protected :
		float dim1, dim2;

	public :
		Geoshape()                 // Default Constructor
		{
			dim1 = dim2 = 0;
		}

		Geoshape(float x)
		{
			dim1 = dim2 = x;
		}

		Geoshape (float x, float y)
		{
			dim1 = x;
			dim2 = y;
		}

		// Setters
		void SetDim1 (float x)
		{
			dim1 = x;
		}
		void SetDim2 (float y)
		{
			dim2 = y;
		}
		// Getters
		float GetDim1 ()
		{
			return dim1;
		}
		float GetDim2 ()
		{
			return dim2;
		}
		// Calculating Area [to be Inherited by child classes]
		float CalculateArea()
		{
			return 0.0;
		}
};

// Child class inherited from Geoshape : Rectangle  (& Try with protected inheritance)
class Rectangle : public Geoshape
{
	public :
		Rectangle (float x, float y) : Geoshape (x,y)
		{}

		// Calculating Area functions
		float CalculateArea()
		{
			return dim1 * dim2;
		}
};

// Child class inherited from Rectangle class : Square  (& Try with protected inheritance)
class Square : public Rectangle
{
	public :
		Square (float x) : Rectangle (x,x)
		{}
};

// Child class inherited from Geoshape class : Triangle (& Try with protected inheritance)
class Triangle : public Geoshape
{
	public :
		Triangle(float b, float h) : Geoshape (b,h)
		{}

		float CalculateArea ()
		{
			return 0.5* dim1 * dim2;
		}
};

// Child class inherited from Geoshape class : Circle (& Try with protected inheritance)
class Circle : public Geoshape
{
	public :
		Circle (float r) : Geoshape(r)
		{}
		// Method CalculateArea
		float CalculateArea()
		{
			return 3.14 * dim1 * dim2;
		}
};


int main()
{
	// Creating an object from Triangle class
	Triangle myTri (20,10);     // dim1, dim2
	cout << "Area of Triangle is : " <<myTri.CalculateArea()<<endl; // 10*10 = 100

	// Creating an object from Circle class
	Circle myCir (7);          // dim1=dim2=r
	cout << "Area of Circle is : "<<myCir.CalculateArea()<<endl; // pi*7*7

	// Creating an object from Rectangle class
	Rectangle myRec(2,5);                                       // 2*5= 10
	cout << "Area of Rectangle is : "<<myRec.CalculateArea()<<endl;

	// Creating an object from SQUARE class
	Square mySqu (5);                                           // 5*5 = 25
	cout << "Area of Square is : "<<mySqu.CalculateArea()<<endl;

	getch();        clrscr();

	// Try to violate the Square constraints with protected inheritence, won't be accessible
	// Using setters
      //	mySqu.SetDim2(9);               // dim1 = 9, dim2 = 5 then 45
	mySqu.SetDim1(9);       // New setter, then, 9*6=72
      	cout<< "Area2 of Square is "<<mySqu.CalculateArea()<<endl;


	myCir.SetDim2(2);              // pi*2*2 if public inheritance
	cout<< "Area2 of Circle is "<<myCir.CalculateArea()<<endl;



	// Geoshape won't be accessed if inheritance is protected
	getch();
	clrscr();

       return 0;
}