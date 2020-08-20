							// Number is sprase or not //
							
	// Given a number n find whether it is sprase or not => Eg: 12 => 1100, => it is not sprase because of 2 consecutive 1s.
	// Sprase number is the number where no two or more consecutive bits are set.
	
// Algorithm:
// we can notice that if we can use bitwise AND of binary representation of the “given number its “right shifted number”
//      (i.e., half the given number) to figure out whether the number is sparse or not. ie,(n &(n>>1)).
//      Result of AND operator would be 0 if number is sparse and non-zero if not sparse.
	
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if(n&(n>>1))   // Bitwise and for n and n>>1 ,ie (n&(n/2)) = (n&(n>>1))= 0 for prase number.
	{
		cout<<"Not Prase number";
	}
	else
		cout<<"Prase number";
}
