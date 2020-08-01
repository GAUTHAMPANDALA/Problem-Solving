				// Given the array of elments and size k find the max and min sum of each subarray of size K	//
				
// Time : O(n) space: O(n)

// The approach we use is dequeue of size k
//		and  here we store usefull elements in dequeue and for every window dequeue.front is answer.
// g(k) to store maximum elements and s(k) to store minimum elements.
// In finding maximum of k element  An element a[j] is said to be usefull, 
//					if a[j] is greater than all the previous elements ; we check this using queue element insertion.
//	In finding minimum of k element  An element a[j] is said to be usefull, 
//					if a[j] is smaller than all the previous elements ; we check this using queue element insertion.
// Here we store indexes than compare with elements for easy acces.


#include <iostream> 
#include <deque> 
  
using namespace std; 


int SumOfKminandmaxsubArray(int arr[] , int n , int k) 
{ 
    int sum = 0;  // Initialize result 
  
    // The queue will store indexes of useful elements in every window 
    // In deque 'G' we maintain decreasing order of  values from front to rear 
    // In deque 'S' we  maintain increasing order of values from front to rear 
    deque< int > S(k), G(k); 
  
    // Process first window of size K 
    int i = 0; 
    for (i = 0; i < k; i++) 
    { 
        // Remove all previous greater elements 
        // that are useless. 
        while ( (!S.empty()) && arr[i]<= arr[S.back()] ) 
            S.pop_back(); // Remove from rear 
  
        // Remove all previous smaller that are elements 
        // are useless. 
        while ( (!G.empty()) && arr[i] >= arr[G.back()]) 
            G.pop_back(); // Remove from rear 
  
        // Add current element at rear of both deque 
        G.push_back(i); 
        S.push_back(i); 
    } 
  
    // Process rest of the Array elements 
    
    for (int j=i ; j <= n; j++ ) 
    { 
        // Element at the front of the deque 'G' & 'S'  is the largest and smallest 
        // element of previous window respectively 
        cout<<arr[G.front()]<<" ";
        sum += arr[S.front()] + arr[G.front()]; 
  
        // Remove all elements which are out of this 
        // window 
        while ( !S.empty() && S.front() <= j - k) 
            S.pop_front(); 
        while ( !G.empty() && G.front() <= j - k) 
            G.pop_front(); 
  
        // remove all previous greater element that are 
        // useless 
        while ( (!S.empty()) &&  arr[j] <= arr[S.back()] ) 
            S.pop_back(); // Remove from rear 
  
        // remove all previous smaller that are elements 
        // are useless 
        while ( (!G.empty()) && arr[j] >= arr[G.back()]) 
            G.pop_back(); // Remove from rear 
  
        // Add current element at rear of both deque 
        G.push_back(j); 
        S.push_back(j); 
    } 
    
}
  

int main()
{
	int arr[] = {1,2,3,1,4,5,2,3,6} ; 
    int n = 9; 
    int k = 3; 
    cout << endl<< SumOfKminandmaxsubArray(arr, n, k) ; 
    return 0; 
 
} 
