						// The program is to find smallest positive number //
				
	// Given an array arr[] of size N, find the smallest positive number missing from the array. //
	
/* 	
	Algorithm:
	
		Whenever we encounter any positive value in our original array, we change the index value of our list to 1
		After that, we simply iterate through our modified list, the first 0 we encounter, 
		its (index value + 1) should be our answer.
		
*/

#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return the first missing positive number from the given unsorted array 
int firstMissingPos(int A[], int n) 
{ 
  
    // To mark the occurrence of elements 
    bool present[n + 1] = { false }; 
  
    
    for (int i = 0; i < n; i++) { // Mark the occurrences 
  
        // Only mark the required elements  All non-positive elements and 
        // the elements greater n + 1 will never  be the answer 
        // For example, the array will be {1, 2, 3}  in the worst case and the result 
        // will be 4 which is n + 1 
        
        if (A[i] > 0 && A[i] <= n) 
            present[A[i]] = true; 
    } 
  
    
    for (int i = 1; i <= n; i++) // Find the first element which didn't appear in the original array 
        if (!present[i]) 
            return i; 
  
   
    return n + 1;  // If the original array was of the type {1, 2, 3} in its sorted form 
} 
  
// Driver code 
int main() 
{ 
  
    int A[] = { 0, 10, 2, -10, -20 }; 
    int size = sizeof(A) / sizeof(A[0]); 
    cout << firstMissingPos(A, size); 
} 
  



		
