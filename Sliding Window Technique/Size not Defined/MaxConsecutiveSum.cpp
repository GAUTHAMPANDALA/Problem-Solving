
		// This program is usage of sliding window technique to print the maximum and Minimum subbaray sum os sum >=Given sum.
		
#include<iostream>
using namespace std;



int maxx(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	return b;
}

int minn(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	return b;
}

int MaxConsSum(int a[],int n,int s)
{
	int sum=0,i=0;
	int max=0;
	for(int j=0;j<n;j++)  // Consider J AS FAST POINTER, I is slow pointer.
	{
		sum=sum+a[j];
		
		while(sum>=s)
		{
		  max=maxx(max,j-i+1);
		  sum=sum-a[i];
		  i++;	
		}
	}
	cout<<"Max sum Subarray is: "<<max<<endl;
}

int MinConsSum(int a[],int n,int s)
{
	int sum=0,i=0;
	int min=100000;
	for(int j=0;j<n;j++)            // Consider J AS FAST POINTER, I is slow pointer.
	{
		sum=sum+a[j];
		
		while(sum>=s)
		{
		  min=minn(min,j-i+1);
		  sum=sum-a[i];				// Minimising the window.
		  i++;	
		}
	}
	cout<<"Min sum Subarray is: "<<min<<endl;
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
	
	MaxConsSum(a,n,s);
	MinConsSum(a,n,s);

}
