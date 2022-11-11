#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lab (14-1) : Complex class overloading "+" "-" postfix & prefix , Cascading "=" Testing
// Operator +
// Operator -

class Complex
{
	private :                       // By default is private
		float real;
		float imag;

	public :
		Complex ();                 // Constructor without parameter (default constructor)
		Complex(float r);           // Constructor with one input parameter
		Complex (float r, float i); // Constructor with two input parameter
	       //	Complex (Complex & c);      // Copy Constructor
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
		
		// Complex1 + Complex2
		Complex operator + (Complex & c)
		{
			Complex temp(real + c.real, imag + c.imag);
			return temp;
		}

		// Complex + f
		Complex operator + (float f)
		{
			Complex temp (real+f, imag);
			return temp;
		}

		// A standalone function to add complex object to float nunber [Float + Complex]
		friend Complex operator + (float f, Complex & c);

		//////////////////////////////////////////////
		// Unary Operators [Pre-fix "++c" & Post-fix "c++"]
		// 1- Prefix
		Complex& operator ++ ()    // By default is Pre-fix
		{
			real ++;
			imag ++;
			return *this;
		}

		// 2- Post-fix
		Complex operator ++ (int dumb) // dumb isn't a parameter, just to diffrentiate between prefix & postfix
		{
			Complex temp(*this);       // A temp obj carring the current this
			real ++;
			imag ++;
			return temp;
		}
		// Cascading "=" Assignment operator
		Complex& operator = (Complex & c)
		{
			real = c.real;
			imag = c.imag;
			return *this;
		}
	// Assignment operator "+="
	Complex &operator += (Complex& c)
	{
		real += c.real;
		imag += c.imag;
		return *this;
	}
	// Comparison Operator "=="
	int operator == (Complex & c)
	{
		if ( (real == c.real) && (imag == c.imag) )
			return 1;
		return 0;
	}

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
// Standalone function to add Complex obj to float number
Complex operator + (float f, Complex & c)
{
	Complex temp(f+c.real, c.imag);
	return temp;
}


/////////////////////////////////////////////
int main()
{
	Complex c1(10,3), c2(6,2);
	Complex c3;

	c3 = c1 + c2;
	c3.Print();
	cout <<endl;
	c3 = c1 + 14.25;
	c3.Print();
	cout <<endl;
	// Standalone function is called
	c3 = 4.5 + c1;
	c3.Print();
	cout<<endl;
	getch();
	clrscr();
	////////////////////////////
	// Pre-fix & Post-fix
	c3 = ++c1;                  // Pre-fix
	cout <<"Pre-fix is : ";
	c3.Print();
	cout<< endl;
	c3 = c2++;                  // Post-fix
	cout << "Post-fix is : ";
	c3.Print();
	cout<<endl;
	getch();
	clrscr();
	////////////////////////////
	// Assignment operator "=" : cascading "="
	// c1 now is 11,4 so will be the c3
	c3 = c1;
	cout <<"c3 : ";
	c3.Print();
	cout<<endl;
	cout<< "c1 : ";
	c1.Print();
	cout<<endl;
	getch();
	clrscr();
	// c1 is still 11,4 so will be c2 & c3
	c1 = c2 = c3;
	cout << "c1 = c2 = c3 = "<<endl;
	c1.Print();  cout<<endl;
	c2.Print();  cout<<endl;
	c3.Print();  cout<<endl;
	getch();
	clrscr();
	//////////////////
	// Assignment operator "+="
	// c1 is still 11,4 . and so is c2 = c1+c2 = 11,4 *2 = 22,8
	c2 += c1;
	cout<<"c2 = ";
	c2.Print();                    cout<<endl;
	cout<< "c1 unchanged = ";
	c1.Print();                    cout<<endl;
	getch();
	clrscr();
	/////////////////////////
	// c1 = c1+c3,       c1 = c2 then, c1 = 22,8 =c2 and c3 is 11,4
	c2= c1 += c3;
	cout <<"c1 is : ";
	c1.Print();      cout<<endl;
	cout<<"c2 is : ";
	c2.Print();      cout<<endl;
	cout<<"c3 is : ";
	c3.Print();      cout<<endl;
	getch();
	clrscr();
	/////////////////////////
	// Comparison Operator "=="
	// c1 is already = to c2
	cout << "Is c1 equal to c2 ? "<<endl;
	if (c1 == c2)
	{
		cout << "YES! c1 == c2" <<endl;
	}
	else
	{ cout << "c1 not equal c2"<<endl; }

	getch();
	//////////////////////
	clrscr();

	return 0;
}