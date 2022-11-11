#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (17-2) : Geoshape Example
// 3- Add a new setter functions to class square & circle
//    & Making it protected

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
class Rectangle : protected Geoshape
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
class Square : protected Rectangle
{
	public :
		Square (float x) : Rectangle (x,x)
		{}
		// Setting a Setter for the side
		void SetSide (int l)
		{
			dim1 = dim2 = l;
		}
		float CalculateArea ()
		{
			return dim1 * dim2;
		}
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
class Circle : protected Geoshape
{
	public :
		Circle (float r) : Geoshape(r)
		{}
		// Setting method to set raduis
		void SetRadius (float rad)
		{
			dim1 = dim2 = rad;
		}
		// Method CalculateArea
		float CalculateArea()
		{
			return 3.14 * dim1 * dim2;
		}
};


int main()
{
	// Creating an object from Circle class
	Circle myCir (7);          // dim1=dim2=r
	cout << "Area of Circle is : "<<myCir.CalculateArea()<<endl; // pi*7*7


	// Creating an object from SQUARE class
	Square mySqu (5);                                           // 5*5 = 25
	cout << "Area of Square is : "<<mySqu.CalculateArea()<<endl;

	// With Setters SetSide & SetRadius
	myCir.SetRadius(7);
	cout<<"Area of circle with setter method "<<myCir.CalculateArea()<<endl;
	mySqu.SetSide(5);
	cout<<"Area of Square with setter method "<<mySqu.CalculateArea()<<endl;

	getch();
	clrscr();

       return 0;
}