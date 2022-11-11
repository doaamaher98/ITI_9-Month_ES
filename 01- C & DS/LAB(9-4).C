#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

// Lab(8-4) : Merge sort on array of integers

#define max 10

void merging(int low, int mid, int high) ;
void sort(int low, int high);

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10]; //TEMP ARRAY FOR SORTION

void main(void)
{

   int i;
   printf("List before sorting\n");

   for(i = 0; i <= max; i++)
   {
      printf("%d ", a[i]);
    }

   sort(0, max);

   printf("\nList after sorting\n");

   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   getch();
   clrscr();
}

void merging(int low, int mid, int high) {
   int l1, l2, i; // INDICIES OF LOWER,HIGHER PARTS AND CURRENT INDEX I

   for(l1 = low, l2 = mid + 1, i = low;
   l1 <= mid && l2 <= high;
   i++)
   {
      if(a[l1] <= a[l2])
	 {
	     b[i] = a[l1++]; //LOWER
	 }
      else
	 {
	     b[i] = a[l2++]; //HIGHER
	 }
   }

   while (l1 <= mid)
      b[i++] = a[l1++];

   while(l2 <= high)
      b[i++] = a[l2++];

   // STORING THE SORTED ARRAY IN A[]
   for(i = low; i <= high; i++)
   {
      a[i] = b[i];
   }
}

void sort(int low, int high)
{
   int mid;

   if(low < high)
   {
      mid = (low + high) / 2; // GETTING MID VALUE

      sort(low, mid); // SORT LOWER PART
      sort(mid+1, high); // SORT HIGHER PART

      merging(low, mid, high); // MERGE THEM TOGETHER
   }
   else
   {
      return;
   }
}

