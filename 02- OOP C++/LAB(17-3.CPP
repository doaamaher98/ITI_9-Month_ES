#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (17-3) : Standalone Function to sumAreas to take 3 parameters as pointers from type Geoshape and return the sum of the 3 object's areas

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
		// Making it virtual [Dynamic binding]
	       virtual float CalculateArea()
	       {
			return 0.0;
	       }
		// Standalone function prototype
	       friend float SumAreas (Geoshape * p1, Geoshape * p2, Geoshape * p3);
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
			return 3.14 * dim1 * dim1;
		}
};

// The Standalone function to calculate the areas of 3 objects
float SumAreas (Geoshape * p1, Geoshape * p2, Geoshape * p3)
{
	 return (p1->CalculateArea() + p2->CalculateArea() + p3->CalculateArea());
}

int main()
{

	Rectangle r1(1,2), r2(5,1),r3(1,1);
	Circle c1(20);
	Triangle t1(10,20);
	// gptr Points to the address of g object
	Geoshape g;
	Geoshape *gptr;

	gptr = & g;
	cout<< gptr->CalculateArea()<<endl;   // 0.0

	gptr = &r1;
	cout<<gptr->CalculateArea()<<endl;    // 2
	//////////////////////////////////
	cout<<"Sum Areas : "<<SumAreas(&r1,&r2,&r3);

	getch(); clrscr();


    return 0;
}



