				// Given the sum of digits and number of the digits find the smallest number //
		
							// Given s=9 , m=2 and the number is 18 //
							
/* Here we Use Greedy Approach 

  The idea is simple the given sum must be represented as the digits given, so we get atleast "1" as the starting digit of 
   number and then it must fill other digits, if there is still sum balanced it must be added at starting digit.
   
   So to track the First digit we subract the sum with 1, so that the remainig sum will be attained by other digits.
   
   Here if we start from begining the "0"s accumilate at back , so number will be increased, hence to prevent this we need
   to traverse from last.
   
   Every elemnet in array  will be hold maximum of 9 as its digit, so we subract 9 from sum and them to the array, and if 
   sum is less than 9 then, the sum will be as digit.
   
*/

#include<bits/stdc++.h>
using namespace std;



void number(int s,int n)
{
	int res[n];  // array of  size n.
	
	s=s-1;   // decreasing sum by 1 so that the 1 will be accumilated at array starting.
	
	res[0]=1;   // Here we are placeing 1 at begining of array.
	
	for(int i=n-1;i>0;i--)   // Now process the remaining  digits from back because we need minimum number.
	{
		  if(s>=9)				// is sum is greater to 9, then the appened 9 to array and decrease sum.
		  {
		  	 res[i]=9;
		  	 s=s-9;
		  }
		  
		  
		  else				// else add the sum to array and as sum is completed.
		  {
		  	res[i]=s;
		  	s=0;
		  }
	}
	
	
	if(s!=0)
	{
		res[0]=s+1;
	}
	
	cout<<"The number is:  \n";   //Printing the number.
	
	for(int i=0;i<n;i++)
	{
		cout<<res[i];
	}
	
}


int main()
{
	 int sum, n;
	 
	 cout<<"Enter sum and number of digits:  \n";
	 cin>>sum>>n;
	 
	 number(sum,n);
	 
	return 0;
}
	 
	 



