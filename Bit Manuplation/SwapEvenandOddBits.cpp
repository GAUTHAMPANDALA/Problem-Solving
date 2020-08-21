 						// Swap Even bits and Odd bits in O(Logn) Time //
 				// Given a number n=23 (00010111) after swapping we get n=43 (00101011) //
 				
// Algorithm:
// Let the input number be x
// 1) Get all even bits of x by doing bitwise and of x with 0xAAAAAAAA. 
//			The number 0xAAAAAAAA is a 32 bit number with all even bits set as 1 and all odd bits as 0.
// 2) Get all odd bits of x by doing bitwise and of x with 0x55555555. 
//			The number 0x55555555 is a 32 bit number with all odd bits set as 1 and all even bits as 0.
// 3) Right shift all even bits.
//  4) Left shift all odd bits.
//  5) Combine new even and odd bits and return.





#include<bits/stdc++.h>
using namespace std;

int swapbits(unsigned int n)
{
	
    unsigned int even_bits = n & 0xAAAAAAAA;   // Get all even bits of x.  
    // 0xAAAAAAAA this is the hexa deccimal number with all even bits set as 1.
    unsigned int odd_bits  = n & 0x55555555;  // Get all odd bits of x.
    // 0x55555555 this is the hexa deccimal number with all odd bits set as 0.
    
    even_bits=even_bits>>1;			// shidting even bits to right by 1 , to become them as odd bits.
    odd_bits=odd_bits<<1;			// shidting odd bits to left by 1, to become them as even bits.
    
	cout<<(even_bits | odd_bits ); // combining all even and odd bits using or.
	
	return 0;   
}

int main()
{
	int n;
	cin>>n;
	
	swapbits(n);
	return 0;
}
