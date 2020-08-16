						// See whether kth bit is Set ot not	//
		//  Given a number n and k, find whether the kth bit is set or not //

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	
	int a=(n>>(k-1));      // This operation makes kth bit at rightmost end, ie right shift.
	
	if(1&a)					// Doing and with the 1, we find whether last bit is set or not.
	{
		cout<<"SET"<<endl;
	}
	else
	{
		cout<<"NOT SET"<<endl;
	}
}
