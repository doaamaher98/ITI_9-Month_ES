#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (14-3) : Overloading on shift operator of cin & cout to print Complex objects

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

		// Making 2 standalone functions with shift operators with istream & ostream : cin & cout
		friend istream& operator >> (istream &in, Complex & c);
		friend ostream& operator << (ostream &out, Complex & c);
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
/////////////////////////////////////////////////////
// Making 2 standalone functions with shift operators with istream & ostream : cin & cout
// 1- istream : cin
istream& operator >> (istream &in, Complex & c)
{
	cout<< "Enter real part : "<<endl;
	in >> c.real;

	cout << "Enter imag part : "<<endl;
	in >> c.imag;

	return in;
}
// 2- ostream : cout
ostream& operator << (ostream &out, Complex & c)
{
	if (c.imag <0)
	{
		out << c.real << "-" << fabs(c.imag) << "i" << endl;
	}
	else
	{
		out << c.real << "+" << c.imag << "i" <<endl;
	}
	return out;
}
/////////////////////////////////////////////
int main()
{
	Complex c1(10,20), c2(30,40), c3;
	// shift operators with istream & ostream : cin & cout
	// Getting the real & imag parts for c3
	cout<< "Enter c3: "<<endl;
	cin >> c3;

	cout << "c1 is "<< c1<<"c2 is " << c2<<"c3 is " << c3<<endl;

	getch();
	clrscr();

	return 0;
}