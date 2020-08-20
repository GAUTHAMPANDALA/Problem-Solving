							// Given a number convert it to Gray and vice versa //
		// Gray code to Binary and Binary code to gray ,ie n=7 in gray=4 and vice versa //


// Algorithm: Binary to Gray 
//			 The Most Significant Bit (MSB) of the gray code is always equal to the MSB of the given binary code.
//			 Other bits of the output gray code can be obtained by XORing binary code bit at that index and previous index.


// Algorithm: Gray to Binary
//			The Most Significant Bit (MSB) of the binary code is always equal to the MSB of the given binary number.
//			Other bits of the output binary code can be obtained by checking gray code bit at that index.
//			If current gray code bit is 0, then copy previous binary code bit, else copy invert of previous binary code bit.


#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int converttogray(int n)
{
	cout<<"Gray conversion is: "<<((n)^(n>>1))<<endl;
	
	return ((n)^(n>>1));
	
}

int converttobinary(int n)
{
	 unsigned int mask;
    for (mask = n >> 1; mask != 0; mask = mask >> 1)
    {
        n = n ^ mask;
    }
    return n;
}

int main()
{
	int n;
	cin>>n;
	
	int n1=converttogray(n);
	cout<<"Binary conversion of given number is "<<converttobinary(n1);
	return 0;
}
