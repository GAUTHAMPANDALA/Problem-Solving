
			// Next Permutation of the Given array. as 123 --> 132, 132 --> 213, 115-151, 321 -> 123.


#include<bits/stdc++.h>
using namespace std;

void printarray(int a[],int n)
{
	for(int i=0;i<n;i++){
		    cout<<a[i]<<" ";
		}
        cout<<endl;
}

void nextpermutation(int a[],int n)
{
	   int k=-1;
        for(int i=0;i<n-1;i++)
         {
                if(a[i]<a[i+1])			    	   // Step-1: Find the largest index k, such that A[i]<A[i+1].
                    k=i;				
          }
        if(k==-1)							
            sort(a,a+n);
        int l;
        for(int i=k+1;i<n;i++){			         //Step-2: Find the largest index l, such that A[l]>A[k].
              if(a[i]>a[k])
                l=i;
        }
        swap(a[k],a[l]);					    // Step-3: Swap a[k],a[l].
        reverse(a+k+1,a+n);					   // Step-4: Reverse (a[k+1] to a[n].)
        printarray(a,n);
}



int main()
{
    int t,n;
    int k=-1;
    cin>>t;									//Testcases
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
		     cin>>a[i];
		 }
     nextpermutation(a,n);    
    }
}

