#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (17-4) : CalculateArea function [pure virtual function and change other classes]
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
		// Making it virtual and pure  [ABSTRACT] = Incomplete so the whole class isn't accessible
		virtual float CalculateArea() = 0;
		////////////////////////////////////////
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
class Circle : public Geoshape
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
	//Geoshape g; // Cant be created [abstract class]
	Geoshape * gptr;   // A pointer from the parent is ok to be used to access childs

	Rectangle r1(2,5);

	// Will call method in child class
	cout<<"Area of Rec : " << r1.CalculateArea()<<endl;

	gptr = &r1;
	cout<< "Area by pointer from parent to child Rect : "<<gptr->CalculateArea()<<endl;

	getch(); clrscr();


    return 0;
}



