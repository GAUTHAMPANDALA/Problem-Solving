							// Longest subarray of even and odd	//
// You are given an array of size n. Find the maximum possible length of a subarray such that its elements 
			//  are arranged alternately either as even and odd or odd and even .
			
// Track current element odd even subsequence and make to null if this even,odd subsequeue is not pbeyed.

#include<iostream> 
using namespace std; 



//Complete this function
int maxEvenOdd(int arr[], int n) 
{ 
   int res=1; // Considering the first element.
   int curr=1;
   int ei=0;
  
   for(int i=1;i<n;i++)
   {
   	   if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0))
       {
           curr++;
		    if(curr>res)
			{ 
			   ei=i;
               res=curr;
			}
       }
       else  // termination for new subaarray.
       curr=1;
    }
   
   cout<< "Starting index: "<<ei-res<<" "<<"ending index: "<<ei<<endl;
   return res;
} 

int main() 
{ 
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cout  << maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
