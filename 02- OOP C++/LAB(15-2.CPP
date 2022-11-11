#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (15-2) : Create Objects & Array of objects from class Complex

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
	real=0;
	imag=0;
	cout<<"Default Constructor with 0 parameters"<<endl;
}

Complex :: Complex (float R)
{
  real = R;
  imag = R;
  cout<< "Constructor with 1 parameter"<<endl;
}

Complex::Complex (float real, float imag)
{
	this -> real = real;
	this -> imag = imag;
	cout<<"Constructor with 2 parameters" <<endl;
}

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
	// Class's Destructor
	cout<<"Destructor is calling"<<endl;
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
	int i,num;
	Complex *ptr;

	// Creating an array of objects of class Complex
	// Each with a different constructor
	Complex arr[3] = { Complex(), Complex(1,2), Complex(3) };
	getch();

	cout<<endl;
	// Static Allocation
	// Printing the array of objects with different constructors
	for(i=0; i<3; i++)
	{
		arr[i].Print();
		cout<<endl;
	}
	// Dynamic Allocation
	cout<< "Enter the Array size "<<endl;
	cin >> num;
	// Allocation
	ptr = new Complex[num];
	// Getting arr elements
	for (i=0; i<num; i++)
	{
	 cin>>ptr[i];
	}
	// Printing
	for (i=0; i<num; i++)
	{
	 ptr[i].Print();
	}
	// Deallocation
	delete [] ptr;

	getch();
	clrscr();

	return 0;
}