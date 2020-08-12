				// Given n elements finds its lcm and hcf	//
				
			// Given array of elements find its lcm and hcf //
			
#include <bits/stdc++.h> 
using namespace std; 
  
typedef long long int ll; 
  
// Utility function to find GCD of 'a' and 'b' 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Returns LCM of array elements 
void findlcm(int arr[], int n) 
{ 
    // Initialize result 
    
    ll ans = arr[0];   
    // ans contains LCM of arr[0], ..arr[i] after i'th iteration, 
    for (int i = 1; i < n; i++) {
	     
        ans = ( (arr[i] * ans)/ gcd(arr[i], ans)); 
    }
     ll lcm=ans;
    printf("lcm is %lld \n",lcm); 
} 

void findgcd(int arr[], int n) 
{ 
    int result = arr[0];
	int f=1; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           
           break;
        } 
    } 
    printf("gcd is: %d",result);  
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = { 2, 7, 3, 9, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
   findlcm(arr, n); 
   findgcd(arr,n);
    return 0; 
} 

