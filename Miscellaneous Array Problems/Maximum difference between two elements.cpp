				// Given an array arr[] of integers, find out the maximum difference between any two elements //
				// such that larger element appears after the smaller number.//
				
// Algorithm
// Here we track 1. MINIMUM ELEMENT UPTO ith Index
//				 2. MAX DIFFERENCE between a[i] and min element.


#include <bits/stdc++.h> 
using namespace std; 
  
  
int maxDiff(int arr[], int arr_size) 
{ 
     // Maximum difference tracing.
     int max_diff = arr[1] - arr[0]; 
       
     // Minimum number tracing.  
     int min_element = arr[0]; 
     for(int i = 1; i < arr_size; i++) 
     {      
       if (arr[i] - min_element > max_diff)                              
       max_diff = arr[i] - min_element; 
         
       if (arr[i] < min_element) 
       min_element = arr[i];                      
     } 
       
     return max_diff; 
}  
  
/* Driver program to test above function */
int main() 
{ 
  int arr[] = {1, 2, 90, 10, 110}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
    
  // Function calling 
  cout << "Maximum difference is " << maxDiff(arr, n); 
  
  return 0; 
} 
