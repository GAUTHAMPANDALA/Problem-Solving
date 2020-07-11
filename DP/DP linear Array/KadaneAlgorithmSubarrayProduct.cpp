
					// KADANE ALGORITHM for Maximum SubbaryProduct.
	// The idea is based on the fact that overall maximum product is maximum of following two because of negative number muldipications.
		// 1.Maximum product in left to right traversal.
		// 2.Maximum product in right to left traversal
		
// The main idea in this method is taking two variables localmin,  localmax and keep track of minimum negative value, maximum positive value.
	

#include <bits/stdc++.h>
using namespace std;

int max(int num1, int num2)
{
	if (num1>num2)
	{
		return num1;
	}
	else
		return num2;
}
int min(int num1, int num2)
{
	if(num1<num2)
	{
		return num1;
	}
	else
		return num2;
}

int swap(int *a,int *b)
{
	int *t;
	*t=*a;
	*a=*b;
	*b=*t;
}
// Function for maximum product 
int MaximumProductSubarray(int arr[], int n) 
{ 
    
    int max_fwd = INT_MIN, max_bkd = INT_MIN; 			// Initialize maximum products in forward and backward directions 
    int max_till_now = 1; 							// Initialize current product 
  
    // max_fwd for maximum contiguous product in  forward direction 
    // max_bkd for maximum contiguous product in  backward direction 
   
    for (int i=0; i<n; i++)						  // iterating within forward direction in array 
    { 
        
        max_till_now = max_till_now*arr[i]; 			// if arr[i]==0, it is breaking condition for contiguous subarray 
        if (max_till_now == 0) 
        { 
             max_till_now = 1; 					// As this is the breaking condition, we start the uldipication from begining.
            continue; 
        } 
        if (max_fwd < max_till_now) // update max_fwd 
            max_fwd = max_till_now; 
    } 
  
     max_till_now = 1; 
  
     
    for (int i=n-1; i>=0; i--) // iterating within backward direction in array
    { 
        max_till_now = max_till_now * arr[i]; 
        if (max_till_now == 0) 					   // if arr[i]==0, it is breaking condition for contiguous subarray 
        { 
            max_till_now = 1; 						// As this is the breaking condition, we start the uldipication from begining.
            continue; 
        }   
        if (max_bkd < max_till_now) // update max_bkd 
            max_bkd = max_till_now; 
    } 
  
    
    int res =  max(max_fwd, max_bkd); // return max of max_fwd and max_bkd  
    return max(res, 0); // Product should not be nagative (Product of an empty subarray is considered as 0) 
} 
  

int main()
{
	int n;
	cin>>n;
	int s;
	cin>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	MaximumProductSubarray(a,n);
}
