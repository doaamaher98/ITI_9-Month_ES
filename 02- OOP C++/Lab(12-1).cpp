#include <iostream>
//using namespace std;    
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (12-1) : Making a Complex Struct object

struct Complex 
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
		
		
		Complex add (Complex c1, Complex c2);    // Member to perform addition behavior
		Complex sub (Complex c1, Complex c2);    // Member to perform subtraction behavior
		
		void Print();               // Member for printing behavior
};

////////////////////////////////
Complex :: Complex()
{
	real = imag = 0;
}

Complex :: Complex (float r, float i)
{
	 real = r;
	 imag = i;
}

Complex :: Complex (float r)
{
	real = imag =r;
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

Complex add(Complex c1, Complex c2)
{
	Complex temp;
	temp.setReal(c1.getReal() + c2.getReal());
	temp.setImag(c1.getImag() + c2.getImag());

	return temp;
}

Complex sub (Complex c1, Complex c2)
{
	Complex temp;
	temp.setReal(c1.getReal() - c2.getReal());
	temp.setImag(c1.getImag() - c2.getImag());

	return temp;
}

/////////////////////////////////////////////
int main()
{
	Complex myComp1, myComp2(3,4), ResultComp(5);
	myComp1.setReal(8);
	myComp1.setImag(4);

	ResultComp = add(myComp1,myComp2);
	cout << "Sum is : "<<endl;
	ResultComp.Print();
	cout<<std::endl;

	cout << "Subtraction is : "<<:endl;
	ResultComp = sub(myComp1,myComp2);
	ResultComp.Print();

	//getch();
	//clrscr();

	return 0;
}