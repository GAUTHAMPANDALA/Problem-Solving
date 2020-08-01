// Given an array of integers. Find a peak element in it. An array element is a peak if it is NOT smaller than its neighbours.
//  For corner elements, we need to consider only one neighbour.
// We solve this using the Divide and Conqour Process.

// In this Algorithm
// Step-1: check for extreme conditions ie, at i=0 or i=n-1
// Step-2: Check for termination condiion, when should the divide and conquor be stoped or what to achieve solution to stop it
// Step-3: Dividing Step based on conditions.
// Step-4: Combining the solution.

#include<stdio.h>

int peakelement(int a[],int low,int high,int n)
{
	 if(a[0]>a[1])
		{
			return 0;
		}	
	else if(high>=low)
	{
		int mid= (low+high)/2;
		
	
		
		if((mid==0 && a[mid]>a[mid+1])) // Checking the extreme conditions in the array.
		{
			return mid;
		}
		
    	else if((a[mid]>=a[mid+1]) && (a[mid]>=a[mid-1]))      // exit condition.
		{
			return mid;
		}
		
		else if(mid==n-1 && a[mid]>a[mid-1])
        {
        	return mid;
		}
	    // if(mid>0 && a[mid-1]>a[mid])
		//{
		peakelement(a,low,mid-1,n);
	   // }
		peakelement(a,mid+1,high,n);  		        	// traverse right if a[mid+1]>a[mid]
		 	
	}



}


int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	

    int k=peakelement(a,0,n,n);
    
    printf("The peak element is: %d",a[k]);
}
