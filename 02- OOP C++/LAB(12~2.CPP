#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (12-2) : Add Setters overloading & make Add, Sub as memebers

class Complex
{
	private :                       // By default is private
		float real;
		float imag;

	public :
		Complex ();                 // Constructor without parameter (default constructor)
		Complex(float r);           // Constructor with one input parameter
		Complex (float r, float i); // Constructor with two input parameter
		~Complex();                 // Destructor [only for each class]

		void setReal (float r);     // Setter for real attribute
		void setImag (float i);     // Setter for imag attribute

		float getReal();            // Getter for real attribute
		float getImag();            // Getter for imag attribute

		// Polymorphism [Function Overloading]
		void SetAll();                   // Setting both real & imag = 0
		void SetAll (float f);           // Setting both real & imag = fabs
		void SetAll (float r, float i);  // Setting Real = r & imag = i

		Complex add (Complex c);    // Member to perform addition behavior
		Complex sub (Complex c);    // Member to perform subtraction behavior

		void Print();               // Member for printing behavior
};

////////////////////////////////
Complex::Complex()
{
	real = imag = 0;
}

Complex::Complex (float real, float imag)
{
	this -> real = real;
	this -> imag = imag;
}

//////////////////////////////////////////////////
//////////////////////////////////////////////
void Complex::SetAll()
{
	real = 0;
	imag = 0;
}

void Complex :: SetAll(float f)
{
	real = f;
	imag = f;
}

void Complex :: SetAll(float r, float i)
{
	real = r;
	imag = i;
}


Complex :: ~Complex ()
{
	// Object's Destructor
}

void Complex :: setReal (float r)
{
	real = r;
}

void Complex :: setImag (float i)
{
	imag = i;
}

float Complex :: getReal()
{
	return real;
}

float Complex :: getImag()
{
	return imag;
}

void Complex :: Print()
{

	if (imag <0)
	{
		cout<<real<<"-"<<"i  ";
	}
	else
	{
		cout << real << "+" << imag<<"i  ";
	}
}

Complex Complex :: add(Complex c)
{
	Complex temp;
	temp.real = this -> real + c.real;
	temp.imag = this -> imag + c.imag;

	return temp;
}

Complex Complex :: sub (Complex c)
{
	Complex temp;
	temp.real = real - c.real;
	temp.imag = imag - c.imag;

	return temp;
}

/////////////////////////////////////////////
int main()
{
	Complex myComp1, myComp2(3,2), ResultComp;
	myComp1.setReal(8);
	myComp1.setImag(4);

	ResultComp = myComp1.add(myComp2);
	cout << "Sum is : "<<endl;
	ResultComp.Print();
	cout<<endl;

	cout << "Subtraction is : "<<endl;
	ResultComp = myComp1.sub(myComp2);
	ResultComp.Print();

	getch();
	clrscr();

	return 0;
}