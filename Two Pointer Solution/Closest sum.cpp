						// Given a Sum find the pair in that sums to given value //

/*
   Algorithm:
   
   		This is two pointer solution , one will be at begining and other will be at end and traverse based on condition.
   		
   		The algorithm basically uses the fact that the input array is sorted. 
		   We start the sum of extreme values (smallest and largest) and conditionally move both pointers. 
		   We move left pointer i when the sum of A[i] and A[j] is less than X. 
		   We do not miss any pair because the sum is already smaller than X. Same logic applies for right pointer j.
		   
		Time: O(n)
*/

#include <iostream>
using namespace std;
 
// Two pointer technique based solution to find if there is a pair in A[0..N-1] with a given sum.
int isPairSum(int A[], int N, int X)
{
    // represents first pointer
    int i = 0;
 
    // represents second pointer
    cout<<endl<<N<<endl;
    int j = N - 1;
 
    while (i < j) {
 
        // If we find a pair
        if (A[i] + A[j] == X)
            return 1;
 
        // If sum of elements at current pointers is less, we move towards higher values by doing i++
        else if (A[i] + A[j] < X)
            i++;
 
        // If sum of elements at current pointers is more, we move towards lower values by doing j--
        else
            j--;
    }
    return 0;
}
 
// Driver code
int main()
{
    // array declaration
    int arr[] = { 3, 5, 9, 2, 8, 10, 11 };
     
    // value to search
    int val = 17;
    
    
    /*Size of array
      
       &arr ==> Pointer to an array of 6 elements. [See this for difference between &arr and arr]

       (&arr + 1) ==> Address of 6 integers ahead as pointer type is pointer to array of 6 integers.

      *(&arr + 1) ==> Same address as (&arr + 1), but type of pointer is "int *".

      *(&arr + 1) - arr ==> Since *(&arr + 1) points to the address 6 integers ahead of arr, the difference between two is 6.
*/
    int arrSize = *(&arr + 1) - arr;
    cout<<"Adress &arr: "<<&arr<<" "<<"&arr + 1: " <<(&arr + 1)<<" *(&arr + 1): "<< *(&arr + 1)<<" arr: "<<arr<<" arrsize: "
	      <<arrSize;
     
    // Function call
    cout << (bool)isPairSum(arr, arrSize, val);
 
    return 0;
}
