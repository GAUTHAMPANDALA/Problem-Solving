
  		// C program to  Find an element in array such that sum of left array is equal to sum of right array in O(n) Time and o(1) space.
  		// C program to  Find the difference between the sum of left array , to sum of right array in O(n) Time and o(1) space.
  	    // C Program to Find the Equalibrium index point in o(n) time and o(1) space.
#include<iostream>
using namespace std;
int FindElement(int a[],int n)   //This Function is based on Array Elemt Partion.
{
	int l_sum=0,r_sum=0;
	
	for(int i=1;i<n;i++)    // Adding Right sum=> sum of elemnts from a[1] to a[n-1], as we take a[0] as partioned.
	{
		r_sum=r_sum+a[i];
	}
	int i=0,j=1;
	for(i=0,j=1;j<n;j++,i++)
	{
		l_sum=l_sum+a[i];  // We maintain the left sum, ie(sum of eleemts before a[j]). 
		r_sum=r_sum-a[j]; // Because we must subtract each traversing element, as they are considered as the partioned eleemnt.
		
		if (l_sum == r_sum)  // Print that partioned number if both sum are equal.
            cout<<"The left_sum=right_sum is: "<<a[i + 1]<<endl; 
	}
}


void FindMinimumDifference(int a[],int n)
{
	int l_sum=0,r_sum=0;
	
	for(int i=1;i<n;i++)    // Adding Right sum=> sum of elemnts from a[1] to a[n-1], as we take a[0] as partioned.
	{
		r_sum=r_sum+a[i];
	}
	int i=0,j=1; int min=a[0];
	for(i=0,j=1;j<n;j++,i++)
	{
		l_sum=l_sum+a[i];  // We maintain the left sum, ie(sum of eleemts before a[j].
		r_sum=r_sum-a[j]; // Because we must subtract each traversing element, as they are considered as the partioned eleemnt.
		int mindiff=l_sum-r_sum;
		
		if(mindiff<min)
		{
			min=mindiff;
		}
	}
	cout<<"The Minimum Difference is the as: "<<min<<endl;    			//Printing Minimum Elemnt.
}


void EquilibriamIndex(int a[],int n) 							//This function is not Based on Partition problem.
{
		int l_sum=0,sum=0;
	
	for(int i=0;i<n;i++)    									// Adding Right sum=> sum of elemnts from a[0] to a[n-1].
	{
		sum=sum+a[i];
	}
	int i=0;
	// Logic is to traverse through each element, subract the a[i] from sum and add that a[i] to left_sum amd compare.
	for(i=0;i<n;i++)
	{
		 sum=sum-a[i];
		if (l_sum == sum )  
        cout<<"The Equilibrium Index is: "<<i<<endl; 	// Printing the Index.
	 	l_sum=l_sum+a[i];
	}

}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	FindElement(a,n);
	FindMinimumDifference(a,n);
	EquilibriamIndex(a, n);
}
  		

