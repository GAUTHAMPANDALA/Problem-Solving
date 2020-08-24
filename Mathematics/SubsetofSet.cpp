						// Given an array of eleesnts as set print all subsets //
		  // Given a[]={1,2,3} => [1],[2],[3],[1,2],[1,3],[1,2,3],[2,3] => for n=3 we have (2^3)-1 = 7 //
	
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int N=pow(2,n);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i & (1<<j))
			{
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
}
