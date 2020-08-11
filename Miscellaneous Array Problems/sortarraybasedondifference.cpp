							// Sort an Array based on aabsolute difference	//
	// Given array elements and k arrage array such that the order is asceding based on element and k difference//
	// Time: O(nlogn) and Space: O(N).
	
//Algorithm.
	// Here we use map datastructure as this implements self balancing Tree, for time complexity //
	// We store based on key and pair where key is absolute difference and pair is array number //
	
	
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to sort an array according absolute 
// difference with x. 
void rearrange(int arr[], int n, int x) 
{ 
    multimap<int, int> m; 
    multimap<int ,int >:: iterator it; // map iterator.
    // Store values in a map with the difference  with X as key 
    for (int i = 0 ; i < n; i++) 
        m.insert(make_pair(abs(x-arr[i]),arr[i])); 
  
    // Update the values of array 
    int i = 0; 
    for (it = m.begin(); it != m.end(); it++) 
        arr[i++] = (*it).second ; 
} 
  
// Function to print the array 
void printArray(int arr[] , int n) 
{ 
    for (int i = 0 ; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = {10, 5, 3, 9 ,2}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int x = 7; 
    rearrange(arr, n, x); 
    printArray(arr, n); 
    return 0; 
} 
