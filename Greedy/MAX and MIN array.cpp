						//   Maximum and Minimum element in the given array //
	
	// Given an array of n elements we have to find the maximum and minimum element //
	
// Algorithm 
// We keep track of the maximum and minimum element at each array index.
// Print the max and min element that will be at end of array.


#include <bits/stdc++.h> 
using namespace std; 


int minn(int a[],int n)
{
	int min=a[0];        //intialise min element

for(int i=0;i<n;i++){

	if(min>a[i])     	// if min is greater than a[i].
	{
		min=a[i];      	// update the min  for that particular index.
	}
} 
   cout<<min<<endl;	  // print latest updated minimum element.
}


int maxx(int a[],int n)
{
int max=a[0];                //intialise max element
for(int i=0;i<n;i++){

	if(max<a[i])			// if max less than a[i].
	{
		max=a[i];			// update the max  for that particular index.
	}	
}
   cout<<max<<endl;        	// print latest updated maximum element.
}


int main()
{
	int n=6;
	int a[]={11,22,5,4,7,85};
	minn(a,n);
	maxx(a,n);
	return 0;
}
