#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (16-2) : Base, Derived classes to calculate Sum with overriding

class Base 
{
	protected :                   // Private vs Protected
		int a,b;
		
	public :
		/*void disp()
		{
			cout<<"Function of Parent Class"<<endl; 
		}*/
		Base ()                               // Default Constructor
		{
			a=b=0;
		} 
		Base (int n)                         // Constructor with 1 parameter
		{
			a=b=n;
		}
		
		Base (int x, int y)                   // Constructor with 2 parameters
		{
			a=x;
			b=y;
		}
		/////// Setters ////////////
		void SetA(int x)
		{
			a=x;
		}
		void SetB (int y)
		{
			b=y;
		}
		////// Getters  ///////////
		int GetA()
		{ return a; }
		int GetB ()
		{ return b; }
		
		// Finding sum method
		int CalculateSum()
		{
			return a+b;
		}
};

// Child class Inhereted
class Derived : public Base
{
	private :
		int c;
		
	public : 
		/*void disp()
		{
			cout<<"Function of child class"<<endl;
		}*/
		Derived () : Base ()     // Default constructor Redirection
		{
			c=0;
		}
		
		Derived(int n) : Base()   // Constructor with 1 parameter
		{
			c=n;
		}
		
		Derived (int x, int y, int z) : Base(x,y)    // Constructor with 3 parameters
		{
			c=z;
		}
		////////////// Setter & Getter ////////////////////////////////////////
		void SetC (int z)
		{ c=z; }
		
		int GetC ()
		{return c;}
		////////////////////////////////////////////////////////
		int CalculateSum ()                 // Method Overriding
		{
			return a+b+c;                       // if a & b were protected it's right, but if a & b are private we have to access getters method
		}
};

void main()
{
	/* Derived o1;                       // Executes the base constructor except if u make overriding it'll print the derived function
	o1.disp();                        // Derived function "overrided"

	// if u want to call the base function
	o1.Base::disp();                 // Base function */

	Base b(5,4);
	cout<<"Calling Calculate Sum method in Parent class" <<endl;
	cout<<b.CalculateSum()<<endl;
	cout<<"-------------------------"<<endl;
	//////////////////////////////////////////////////////
	Derived d1, d2(20), d3(1,2,3);
	d1.SetA(3);
	d1.SetB(7);
	d1.SetC(1);

	cout<<"Calling Calculate Sum method after overriding"<<endl;
	cout<<"d1 : "<<d1.CalculateSum()<<endl;     //11 (3+7+1)
	cout<<"d2 : "<<d2.CalculateSum()<<endl;     //20
	cout<<"d3 : "<<d3.CalculateSum()<<endl;     //6 (1+2+3)

	cout<<"d1.Base : "<<d1.Base::CalculateSum()<<endl; //c=1 + b=(5+4)

	cout<<"------------------------------";
	getch();
	clrscr();
	
}