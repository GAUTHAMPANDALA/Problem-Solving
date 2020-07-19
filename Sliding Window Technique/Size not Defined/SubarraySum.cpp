
					// The Program to Return Subarray index with given sum	//
	// The array elements and sum is given, find the subarray sum which matches it and return their index //

#include<iostream>
using namespace std;

int subArraySum(int arr[], int n, int sum)
{
     int curr_sum = 0, start = 0, i;

    /* Add elements one by one to curr_sum and if the curr_sum exceeds the sum,then remove starting element */
    for (i = 0; i <= n; i++) {
    	
    	 curr_sum = curr_sum + arr[i];  // Add this element to curr_sum
        // If curr_sum exceeds the sum, then remove the starting elements 
        // This is the termination/Decrementing Statement.
        while (curr_sum > sum && start < i - 1) {
            curr_sum = curr_sum - arr[start];
            start++;
        }

        // If curr_sum becomes equal to sum, then return true
        if (curr_sum == sum) {
            cout << "Sum found between indexes "<< start << " and " << i;
            return 1;
        }

        
       
    }

    // If we reach here, then no subarray
    cout << "No subarray found";
    return 0;
}

// Driver Code
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}
