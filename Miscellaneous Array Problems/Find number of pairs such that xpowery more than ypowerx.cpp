						// Given two arrays X[] and Y[] of positive integers //
	// find number of pairs such that x^y > y^x where x is an element from X[] and y is an element from Y[]. //
	

// Algorithm Tric
// The problem can be solved in O(nLogn + mLogn) time. The trick here is, if y > x then x^y > y^x with some exceptions.

// Algorithm and exception conditions
// Sort array Y[].
// For every x in X[], find the index idx of smallest number greater than x (also called ceil of x) in Y[] 
// using binary search or we can use the inbuilt function upper_bound() in algorithm library.
// All the numbers after idx satisfy the relation so just add (n-idx) to the count.

//Exceptions
// If x = 0, then the count of pairs for this x is 0.
// If x = 1, then the count of pairs for this x is equal to count of 0s in Y[].
// These are some exceptions also for x values.
//   a. x = 2, y = 3 or 4, then not true
//   b. x = 3, y = 2, then true.
//   c  x > 1 , y = 0 or 1 then true.



#include<bits/stdc++.h> 
using namespace std; 
  
// Function to return count of pairs with x as one element  of the pair. It mainly looks for all values in Y[] where 
// x ^ Y[i] > Y[i] ^ x 
int count(int x, int Y[], int n, int NoOfY[]) 
{ 
    // If x is 0, then there cannot be any value in Y such that  x^Y[i] > Y[i]^x 
    if (x == 0) return 0; 
  
    // If x is 1, then the number of pais is equal to number of  zeroes in Y[] 
    if (x == 1) return NoOfY[0]; 
  
    // Find number of elements in Y[] with values greater than x 
	// upper_bound() gets address of first greater element in Y[0..n-1] 
    int* idx = upper_bound(Y, Y + n, x); 
    int ans = (Y + n) - idx; 
  
    // Here x must be greater than 1, increase number of pairs for y=0 and y=1 as per exception 3c becaause this holds true.  
    ans += (NoOfY[0] + NoOfY[1]); 
  
    // Decrease number of pairs for x=2 and (y=4 or y=3) as per exception 3a.
    if (x == 2)  ans -= (NoOfY[3] + NoOfY[4]); 
  
    // Increase number of pairs for x=3 and y=2, as per exception 3b  becaause this holds true.
    if (x == 3)  ans += NoOfY[2]; 
  
    return ans; 
} 
  
// Function to return count of pairs (x, y) such that x belongs to X[], y belongs to Y[] and x^y > y^x 
int countPairs(int X[], int Y[], int m, int n) 
{ 
    // To store counts of 0, 1, 2, 3 and 4 in array Y 
    int NoOfY[5] = {0}; 
    for (int i = 0; i < n; i++) 
        if (Y[i] < 5) 
            NoOfY[Y[i]]++; 
  
    // Sort Y[] so that we can do binary search in it 
    sort(Y, Y + n); 
  
    int total_pairs = 0; // Initialize result 
  
    // Take every element of X and count pairs with it 
    for (int i=0; i<m; i++) 
        total_pairs += count(X[i], Y, n, NoOfY); 
  
    return total_pairs; 
} 
  
// Driver program  
int main() 
{ 
    int X[] = {2, 1, 6}; 
    int Y[] = {1, 5}; 
  
    int m = sizeof(X)/sizeof(X[0]); 
    int n = sizeof(Y)/sizeof(Y[0]); 
  
    cout << "Total pairs = " << countPairs(X, Y, m, n); 
  
    return 0; 
}




