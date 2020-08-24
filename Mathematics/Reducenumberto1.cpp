				// Given a number reduce that number to 1	//
			// Conditions 1) if n even do: n=n/2.  2) n is odd do n-1 (or) n+1. //
			

// Algorithm 
// The idea is to recursively compute the minimum number of steps required.
// If the number is even, then we are allowed to only divide the number by 2.
// But, when the number is Odd, we can either increment or decrement it by 1. 
// So, we will use recursion for both n-1 and n+1 and return the one with the minimum number of operations.
// Count each operation.




#include <bits/stdc++.h> 
using namespace std; 
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int countops(int n)
{
  	
	if(n==1)
	return 0;
	
	if(n%2==0)
	{
		return 1+countops(n/2);  
	}
	
	if(n%2==1)
	{
		return 1+min(countops(n-1),countops(n+1));
	}
	

}
		
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    int n; 
    cin>>n;
    cout<<countops(n); 
    cout<<endl;
    }
    return 0; 
} 
