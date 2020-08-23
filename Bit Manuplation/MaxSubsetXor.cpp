
						// Maximum Subset Xor //
		// Given Array of integers find the maximum subset array xor value this is O(n^2) approach//

#include<bits/stdc++.h> 
using namespace std; 


int main()
{
	int a[]={2,4,5,7,8,9};
	int n=6;
	 int sum=0,m=0;
    for(int i=0;i<n;i++)
    {      
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<n;k++)
            {
               sum=sum^a[k];
               m=max(m,sum);
            }
        }
    }
    
    cout<<m;
}


