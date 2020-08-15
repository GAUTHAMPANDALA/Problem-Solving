						// Given a number N find the first set bit //
						
					// Given a=12 (1010) => first set bit is at position 2	in O(logn) //

// Algorithm: 
//  1. Take two's complement of the given no, because all bits are reverted except the first '1' from right to left .
//  2  Do a bit-wise & with original no, this will return no with the required one only.
//  3  Take the log2 of the no, you will get (position - 1).
//  4  Add 1 to get original position.
// OR USE FFS(N) function in cpp to get First least significant position.
					
					
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	
    //  cout<<ffs(n); THIS FUNCTION RETURNS FIRST LEAST SIGNIFICANT POSITION.
    
    cout<<log2(n & -n) + 1; // this is -n 2's complement of n.
    
}
