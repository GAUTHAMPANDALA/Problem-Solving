
				// The program is to store the rain water, from given bar of width 1 and height by array elements in O(1) and O(n).				
		// From the given array we build the structure to store the rainwater. We can do this buy SLiding window.	
			
		//  The idea is, we will just maintain two variables to store the maximum till that point. 
		// Since water trapped at any element = min( max_left, max_right) – arr[i] 
	// we will calculate water trapped on smaller element out of A[low] and A[high] first and move the pointers till lo doesn’t cross high.
	    
	    
#include <iostream> 
using namespace std; 
  
int findWater(int arr[], int n) 
{ 
    
    int result = 0; 						// initialize output   
    int left_max = 0, right_max = 0;	 // maximum element on left and right 
    int low = 0, high = n - 1; 			// indices to traverse the array 
  
    while (low <= high) { 
        if (arr[low] < arr[high]) {  // Becuse Lowest elemnt will store the water, go go to lowest eleemnt side first.
            if (arr[low] > left_max) 
                
                left_max = arr[low]; 			// update max in left 
            else
                
                result += left_max - arr[low]; 	// water on curr element = max - curr 
            low++; 
        } 
        else { 
            if (arr[high] > right_max) 
                 
                right_max = arr[high];			 // update right maximum
            else
                result += right_max - arr[high]; // water on curr element = max - curr 
            high--; 
        } 
    } 
  
    return result; 
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
    cout << "Maximum water that can be accumulated is "
         << findWater(a, n); 
} 

