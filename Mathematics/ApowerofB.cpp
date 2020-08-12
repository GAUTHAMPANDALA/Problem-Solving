					// Check if B is power of A	//
		// Given two numbers chech if the B is power of A in O(1)	//
		
#include <iostream>
#include <math.h> 
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int x,y;
	    cin>>x>>y;
	    long long int res1 = log(y) / log(x);  // [log(y)/log(x)] = = [log(y)/log(x)] exact division.
        double res2 = log(y) / log(x); 
    if (res1 == res2)
    { 
        cout<<1<<endl; 
	}
	else
	{
	    cout<<0<<endl;
	}
	}
	return 0;
}
