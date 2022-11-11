#include <iostream.h>
#include <conio.h>
using namespace std;


void main(void)
{
 float *ptr;
 int i;
 ptr = new float[15];
 for (i=0; i<16;i++)
 {

   cout<<ptr[i]<<endl;

 }
getch();

}