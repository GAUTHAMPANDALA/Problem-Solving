
					// KADANE ALGORITHM for Maximum SubbarySum.
		// Simple idea of the Kadane’s algorithm is to look for all positive contiguous segments of the array 
		// Each time we get a positive sum compare it with max_so_far and update max_so_far if it is greater than max_so_far

#include<iostream>
using namespace std;
int MaximumSumSubarray(int a[],int n)
{
	int sum=0;     //  look for all positive contiguous elements sum of the array
	int maximum=0; // Used to keep track of maximum sum of contiguous selements among all positive elements
	int i=0;
	int start=0,end=0;
	for(int j=0;j<n;j++)
	{
		sum=sum+a[j];			// Tracking the sum of numbers.
		
		if(maximum<sum)			// Tracking the maximum sum.
		{
			sum=maximum;
			start=i;
			end=j;
			
		}
		if (sum< 0)     // If we track the negative sum, then shift the start (i=j+1) as there will be  maximum sum only from (j+1 - N).
        { 
            sum = 0;   // Reclculating sum from j+1.
            i = j + 1; // Changing the Pointer.
        } 
	}
		cout<<"Maximum Subarray sum is as: "<<maximum<<endl;
		cout<<"The Starting and Ending indexs are as: "<<start<<" "<<end<<endl;
}


int main()
{
	int n;
	cin>>n;
	int s;
	cin>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	MaximumSumSubarray(a,n);
}
