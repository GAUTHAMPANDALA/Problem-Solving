						// Program to count the set of bits //
				// Given number n=12, n=1100 , no.of set bits is 2. //
				
// Algorithm:  We use Brian Kernighan’s Algorithm.
// This states that if we subtract a number by 1 and do bitwise & with itself (n & (n-1)),we unset the rightmost set bit.
// When we perform this operation in loops we get the no.of set bits.
				
// Logic 2: Do n&1 we get last bit, and now add that bit to count and do right shift to n by 1 bit, untill n>0.			
				
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while (n > 0) 
    { 
       count+=n&1;    // adding the last bit to the count.
       n=n>>1;		  // left shift n by 1 bit.
    } 
     return count; 
     cout<<count;
   
   
    /*Logic 2:  Brian Kernighan’s Algorithm
      
        int c=0;
        while(n>0)
        {
        c++; n=n&(n-1);
        }
         return c; 
	     cout<<c;
    */
   
}
