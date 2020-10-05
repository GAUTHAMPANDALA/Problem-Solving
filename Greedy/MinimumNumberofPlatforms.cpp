					// Given arrival and departure times of all trains that reach a railway station	 //
		// the task is to find the minimum number of platforms required for the railway station so that no train waits //
     		// We are given two arrays which represent arrival and departure times of trains that stop. //

// Algorithm:
// Sort the arrival and departure time of trains.
// now we need two variables, one to update the result and other to store final result.
// Traverse the array and increment the platforms if arrival time less than departure times. 
// and also decrement the platforms if departure time is greater than arrival time.
// now we need to find maximum of incremented or decremented platform.


#include <algorithm> 
#include <iostream> 
  
using namespace std; 
  

int findPlatform(int arr[], int dep[], int n)    // Returns minimum number of platforms required 
{ 
    // Sort arrival and departure arrays 
    sort(arr, arr + n); 
    sort(dep, dep + n); 
  
    // plat_needed indicates number of platforms  needed at a time 
    int plat_needed = 1, result = 1; 
    int i = 1, j = 0; 
  
    // Similar to merge in merge sort to process  all events in sorted order 
    while (i < n && j < n) { 
      
        if (arr[i] <= dep[j]) {   // if arrival less that departure, we need another platform
            plat_needed++; 
            i++; 
        } 
  
        else if (arr[i] > dep[j]) {   //if arrival more that departure, we can decrease the platform
            plat_needed--; 
            j++; 
        } 
  
       
        if (plat_needed > result)     // updating the maximum platforms needed while traversing.
            result = plat_needed; 
    } 
  
    return result; 
} 
  
// Driver program to test methods of graph class 
int main() 
{ 
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 }; 
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Minimum Number of Platforms Required = "<< findPlatform(arr, dep, n); 
    return 0; 
} 
