
					// HouseRobberer problem in the Application of Sliding window in O(n) and O(1).
	
		// There are n houses build in a line, each of which contains some value in it.
		//  A thief is going to steal the maximal value of these houses, but he can’t steal in two adjacent houses.
		// While reaching house i thief has two options, either he robs it or leave it.
		
#include <iostream> 
using namespace std; 

int maxx(int a,int b)
{
	if(a>b)
	return a;
    else
    return b;
}
  
int maxloot(int a[],int n)
{
  	if (n == 0) 
        return 0; 
  
    int value1 = a[0]; 
    if (n == 1) 					// if only 1 elements present. he has to go there
        return value1; 
  
    int value2 = maxx(a[0], a[1]);   // if only 2 elements present. he has to go to maximum house.
    if (n == 2) 
        return value2; 
        
    
    int dp[n];  // This is the memorisation array, used as part of dynamic programming to store the maximum sum up to ith index.
    for(int i=2;i<n;i++) 
    {
    	dp[i]=maxx(a[i]+dp[i-2],dp[i-1]); // dp[i-1] is the maximum money upto i-1 house. dp[i-2] is maximum money up to [i-2].
	}
cout<<dp[n-1]<<endl;  // This is the maximum amount of money upto N houses.
} 
  
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	maxloot(a,n);
}
