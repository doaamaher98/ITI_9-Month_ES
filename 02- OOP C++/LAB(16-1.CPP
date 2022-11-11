#include <iostream.h>
//using namespace std;
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Lab (16-1) : Weak Association of Picture class with class Point,Line,Circle,Rectangle
////////////////////////////////////////////////////////////////////////////////////////
// Class Point
class Point 
{
	private :
		int x;
		int y;

	public :
		Point () : x(0), y(0)			     	// Default Constructor with no parameters [Redirection]
		{
			cout<<"\n Point Default Constructor with 0 parameters"<<endl;
		}
		Point (int m) : x(m),y(m) 				// Constructor with 1 parameter [Redirection]
		{
			cout<<"\n Point Constructor with 1 parameter"<<endl;
		}
		Point (int m, int n) : x(m), y(n)			// Constructor with 2 parameters [Redirection]
		{
			cout <<"\n Point Constructor with 2 parameters"<<endl;
		}

		~Point ()							// Point Destructor
		{
			cout<<"\n Point Destructor is calling"<<endl;
		}

		// Member functions
		void SetX (int m)
		{
			x=m;
		}
		void SetY (int n)
		{
			y=n;
		}
		void SetXY (int m, int n)
		{
			x=m;
			y=n;
		}
		int getX ()
		{
			return x;
		}
		int getY ()
		{
			return y;
		}
		// Print Method
		void Print()
		{
			cout << "Point Data are x: "<< x <<" and y : "<<y<<endl;
		}
};
////////////////////////////////////////////////////////
// Class Circle
class Circle
{
	private :
		Point center;
		int rad;

	public :
		Circle() : center(0),rad(0)             // Default Constructor with 0 parameter [Redirection]
		{
			cout<<"\n Circle Default Constructor with 0 parameter"<<endl;
		}
		Circle (int x1, int y1, int r) : center(x1,y1), rad(r)    // [Redirection]
		{
			cout << "\n Circle Constructor with 3 parameters "<<endl;
		}
		// Destructor
		~Circle ()
		{
			cout << "\n Circle Destructor is calling"<<endl;
		}
		// Print Method
		void Print ()
		{
			cout<<"Center : ";
			center.Print();
			cout<<"Radius : "<< rad << endl;
		}
};
///////////////////////////////////////////////////////////
// Class Line
class Line
{
	private :
		Point start;
		Point end;

	public :
		Line() : start(0), end(0)                     // Default Constructor with 0 parameters [Redirection]
		{
			//start.setXY (0,0);
			//end.setXY (0,0);
			cout << "\n Line default Constructor with 0 parameters"<<endl;
		}
		Line (int x1, int y1, int x2, int y2) : start(x1,y1), end(x2,y2) //[Redirection]
		{
			//start.setXY(x1,y1);
			//end.setXY(x2,y2);
			cout << "\n Line Constructor with 4 parameters"<<endl;
		}
		~Line ()                              // Destructor
		{
			cout << "\n Line Destructor is calling"<<endl;
		}
		// Print Method
		void Print ()
		{
			cout<<"Start : ";
			start.Print();
			cout <<"End : ";
			end.Print();
		}
};
/////////////////////////////////////////////////////////////////
// Class Rectangle
class Rectangle
{
	private :
		Point UL;
		Point LR;
	public :
		Rectangle (): UL(0),LR(0)                  // Default Constructor [Redirection]
		{
			cout<< "\n Rectangle Default Constructor with 0 parameter" <<endl;
		}
		Rectangle (int x1, int y1, int x2, int y2) : UL(x1, y1), LR(x2, y2) //[Redirection]
		{
			cout << "\n Rectangle Constructor with 4 parameters "<<endl;
		}
		// Destructor
		~Rectangle()
		{
			cout<<"\n Rectangle Destructor is calling"<<endl;
		}
		// Print Method
		void Print()
		{
			cout << "Upper Left points: "<<endl;
			UL.Print();
			cout << "Lower Right points: "<<endl;
			LR.Print();
		}
};
/////////////////////////////////////////////////////////////////////////////////////////
// Class Picture
class Picture 
{
	private :
		int cNum;
		int rNum;
		int lNum;
		
		// Pointers of different classes to make 3 arrays
		Circle    *picCircles;
		Rectangle *picRects;
		Line      *picLines;
		
	public :
		Picture()                         // Default Constructor 
		{
			// Setting all integers to 0
			cNum = 0;
			rNum = 0;
			lNum = 0;
			
			// Setting the pointers to NULL
			picCircles = NULL;
			picRects =   NULL;
			picLines =   NULL;
			cout << "\n Picture Constructor with 0 parameters" <<endl;
		}
		Picture (int cn, int rn, int ln, Circle *pC, Rectangle *pR, Line *pL)
		{
			cNum = cn;
			rNum = rn;
			lNum = ln;	
			// Pointers
			picCircles = pC;
			picRects   = pR;
			picLines   = pL;
			cout<< "\n Picture Constructor with 6 parameters "<<endl;
		} 
		
		// Setter methods prototypes
		void setCircles (int cn, Circle* cptr);
 		void setRects   (int rn, Rectangle* rptr);
		void setLines   (int ln, Line* lptr);
		
		
		void Print();
};

// Setter Methods definition
void Picture :: setCircles (int cn, Circle *cptr)
{
	cNum = cn;
	picCircles = cptr;
}

void Picture :: setRects (int rn, Rectangle *rptr)
{
	rNum = rn;
	picRects = rptr;
}

void Picture :: setLines(int ln, Line *lptr)
{
	lNum = ln;
	picLines = lptr;
}
//////////////////////////////////////////////////////
// Printing 4 shapes in picture
void Picture :: Print()
{
	int i;
	for (i=0; i<cNum; i++)
	{
		picCircles[i].Print();
	}
	for (i=0; i<rNum; i++)
	{
		picRects[i].Print();
	}
	for (i=0; i<lNum ; i++)
	{
		picLines[i].Print();
	}
}
/////////////////////////////////////////////////////////////////////////////////////
void main()
{

     cout<<"First myPic object from Picture class"<<endl;
     Picture myPic;                // Creating an object
   //  getch(); clrscr();

      cout<<" Rectangle array setting "<<endl;
      Rectangle rArr[2] = {Rectangle(40,50,60,70), Rectangle(80,90,100,110)};
      //	getch(); clrscr();
      cout<<"Circle Array setting"<<endl;
      Circle cArr[2]    = {Circle(10,10,10), Circle(20,20,20)};
       //	getch(); clrscr();

      Line lArr[2]      = {Line(150,200,250,300), Line(350,400,450,500)};
       // getch(); clrscr();
	///////////////////////////////////
       myPic.setCircles (2,cArr);
       myPic.setRects   (2,rArr);
       myPic.setLines   (2,lArr);

       myPic.Print();
       getch();
	//////////////////////////////////////////////
     /*	{
		Picture myPic2 (2,2,2, cArr, rArr, lArr);
		myPic2.Print();
	}*/

	/*
	// Dynamic Allocation
	Line *lArr;
	lArr = new Line[2];

	lArr[0] = Line(10,20,30,40);
	myPic.setCircles(2,cArr);
	myPic.setRects(2,rArr);
	myPic.setLines(2,lArr);
	clrscr();
	myPic.Print();
	// deallocate
	delete [] lArr;
	*/
	getch();
	clrscr();
}


