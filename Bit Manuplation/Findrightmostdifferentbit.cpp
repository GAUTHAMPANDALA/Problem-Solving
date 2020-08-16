					// Program to find right most difference between 2 elements	//
	  			// Given m and n we have to find right most diferent element in them. //
	  	    // Given m=9 and n=4 ie, 1001 and 100 the difference bit is at position 4. //
	  	    


					
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


int main()
{
	int n,m;
	cin>>n>>m;
	
    int a= n^m; // the difference bits will be set to 1 in the a and then we find rightmost set bit.
    
    int mask=1,counter=1; // Finding right most set bit.
    while(a)
    {
    	if(a&mask)			// this is the termination condition to check the bit position.
    	{
    		cout<<counter;
    		break;
		}
		
		a=a>>1;			// here we are shifting elements by 2 to find the right set bit.
		counter++;		// increment the position using counter.
	}
    
}
