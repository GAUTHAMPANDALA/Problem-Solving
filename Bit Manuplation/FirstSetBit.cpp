						// Given a number N find the first set bit //
						
					// Given a=12 (1010) => first set bit is at position 2	in O(logn) //

// Algorithm: 
//  1. Take two's complement of the given no, because all bits are reverted except the first '1' from right to left .
//  2  Do a bit-wise & with original no, this will return no with the required one only.
//  3  Take the log2 of the no, you will get (position - 1).
//  4  Add 1 to get original position.
// OR USE FFS(N) function in cpp to get First least significant position.

// Note: When we divide a decimal by 2, actualy we are right shifting a bit by 1. eg(4/2=2, ie 100 traansforms to (10/010)).
//		When we divide an element by its base number, we are right shifting that element by one. 

//OR Keep doing number right shift and increment position untill (number & 1 ==1),
//       because only at that position we find the set bit. 
//      EG: ((100 & 001)=0)=>((010 & 001)=0)=>((001 & 001))=1,we can find position.	


					
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	
    // LOGIC 1 cout<<ffs(n); THIS FUNCTION RETURNS FIRST LEAST SIGNIFICANT POSITION.
    
   //  Logic 2 cout<<log2(n & -n) + 1; // this is -n 2's complement of n.
    
    int mask=1,counter=1;
    while(n)
    {
    	if(n&mask)			// this is the termination condition to check the bit position.
    	{
    		cout<<counter;
    		break;
		}
		
		n=n>>1;			// here we are shifting elements by 2 to find the right set bit.
		counter++;		// increment the position using counter.
	}
    
}
