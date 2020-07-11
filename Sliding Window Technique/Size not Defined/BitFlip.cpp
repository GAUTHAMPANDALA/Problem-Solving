
// Given a binary array and an integer m, find the position of zeroes flipping which creates maximum number of consecutive 1’s in array.

// The idea is to use a window covering from index wL to index wR. 
// The number of zeros inside the window be in a vriable called zeroesCount. We maintain the window with at most m zeros inside.
// We use ZeroesCount because, we need to count zeros that are need to flip for each subarray.

#include<bits/stdc++.h> 
using namespace std; 
  
// m is maximum of number zeroes allowed to flip and n is size of array 
void findZeroes(int arr[], int n, int m) 
{ 
    
    int wL = 0, wR = 0;    // Left and right indexes of current window 
    int bestL = 0, bestWindow = 0;  // Left index and size of the widest window  
    int zeroesCount = 0;  // Count of zeroes in current window     
    while (wR < n)  // While right boundary of current window doesn't cross  right end
    { 
        
        if (zeroesCount <= m)  // If zero count of current window is less than m,  widen the window toward right.
        { 
            if (arr[wR] == 0) 
              zeroesCount++; 
            wR++; 
        }  
      
        if (zeroesCount > m)   // If zero count of current window is more than m, reduce the window from left. 
        { 
            if (arr[wL] == 0)
              zeroesCount--;  // Because we already encountered those Zeroes, so
            wL++; 
        }  
        
        if ((wR-wL > bestWindow) && (zeroesCount<=m)) // Updqate widest window if this window size is more 
        { 
            bestWindow = wR-wL; 
            bestL = wL; 
        } 
    } 
  
    
    for (int i=0; i<bestWindow; i++)               // Print positions of zeroes in the widest window
    { 
        if (arr[bestL+i] == 0) 
           cout << bestL+i << " "; 
    } 
} 
  
// Driver program 
int main() 
{ 
   int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1}; 
   int m = 2; 
   int n =  sizeof(arr)/sizeof(arr[0]); 
   cout << "Indexes of zeroes to be flipped are "; 
   findZeroes(arr, n, m); 
   return 0; 
} 
