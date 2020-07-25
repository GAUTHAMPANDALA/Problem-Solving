							// Longest subarray of even and odd	//
// You are given an array of size n. Find the maximum possible length of a subarray such that its elements 
			//  are arranged alternately either as even and odd or odd and even .
			
// Track current element odd even subsequence and make to null if this even,odd subsequeue is not pbeyed.

#include<iostream> 
using namespace std; 


int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
//Complete this function
int maxEvenOdd(int arr[], int n) 
{ 
   int res=0;
   int curr=0;
   int si=0,ei; // si and ei is starting index and ending index
   for(int i=0;i<n;i++)
   {
   	   
   	   if(i==n-1)
   	   {
   	   	  if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0)){
			curr++; 
             ei=i;
          }
                
       }
      else if((arr[i]%2==0&&arr[i+1]%2!=0)||(arr[i]%2!=0&&arr[i+1]%2==0))
       {
           curr++;
           ei=i;
       }
       else  // termination for new subaarray.
       {
       curr=0;
       ei=0;
       }
      
       res= max(res,curr);
       
        
   }
    si=ei-res;
    
    cout<<si<<" "<<ei<<endl;
 
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
