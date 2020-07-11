
    										// SLIDING WINDOW TECHNIQUE //
    	//  Link  https://medium.com/@zengruiwang/sliding-window-technique-360d840d5740 //
       // Link for All problem Statements for Sliding Window:	https://www.techiedelight.com/sliding-window-problems/
       
/*
 Working:        
   Step-1:   Operate First K elemnts ie, First K-Window , as Curr
  Step-2:    Traverse from K to N and  according to mathematical operations consdier a[i] element and eleminte a[i-k] as Window.
  Step=3: Update the Curr with respect to Window.
*/
       
#include <iostream>
using namespace std;

int max(int a,int b)		// Minimum function.
{
	if(a>b)
	return a;
	else
	return b;
}

int min(int a,int b)   // Minimum function.
{
	if(a<b)
	return a;
	else
	return b;
}

void MaxAndMinProductSubarraySizeOfK(int a[],int k,int n)   //Function for Max and Min Subarray Product
{
	int maxprod=0,minprod=0;
	int currprod=1;
	for(int i=0;i<k;i++)
	{
	currprod=currprod*a[i];					// Calculating the First K window that is Current calculaation. as, (a[0] -a[k]). 
		
	}
	int windowprod=currprod;
	
	for(int i=k;i<n;i++)				// Traverse fro K to N and calculate further and store as WindowCalculation.
	{
		
		windowprod=windowprod/a[i-k];				// Elminate a[i-k], as it cross window k.
		windowprod=windowprod*a[i];					// Add a[i], as it forms new window (a[i-k+1] -a[i]).
		maxprod=max(currprod,windowprod);  	       // Update the variable of required calculation, eg- maxprod,maxsum etc 			.
		minprod=min(currprod,windowprod);         //update Current calculation from the window calculation.
	}
	cout<<"The Maximum and Minimum subarray Product of size K is "<<maxprod<<" "<<minprod<<endl;  // Max and Min Product	
}

void MaxMinSumAndAverageOfSubarraySizeOfK(int a[],int k,int n)   //Function for Max and Min Subarray Sum.
{
	int maxsum=0,minsum=0;
	int currsum=0;
	for(int i=0;i<k;i++)
	{
	currsum=currsum+a[i];					// Calculating the First K window that is Current calculaation. as, (a[0] -a[k]).
		
	}
	int windowsum=currsum;
	
	for(int i=k;i<n;i++)					// Traverse fro K to N and calculate further and store as WindowCalculation.
	{
		
		windowsum=windowsum-a[i-k];			// Elminate a[i-k], as it cross window k.
		windowsum=windowsum+a[i];			// Add a[i], as it forms new window (a[i-k+1] -a[i]).
		maxsum=max(currsum,windowsum);     // Update the variable of required calculation, eg- maxprod,maxsum etc  
		minsum=min(currsum,windowsum);  	//update Current calculation from the window calculation.
	}
	cout<<"The Maximum and Minimum subarray Sum of size K is "<<maxsum<<" "<<minsum<<endl;	  // Max and Min sum
	cout<<"The Maximum and Minimum Subarray Averges of size K is "<<maxsum/k<<" "<<minsum/k<<endl; // Max and Min Average
}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	  MaxMinSumAndAverageOfSubarraySizeOfK(a,k,n);
	  MaxAndMinProductSubarraySizeOfK(a,k,n);
	  
}
