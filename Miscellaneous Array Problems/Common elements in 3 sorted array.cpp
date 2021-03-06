				// There are 3 SORTED ARRAYS find the common elements in them //
	
 // Algorithm
 // We are using same algorithm as Merge function in mergesort.
 // Let the current element traversed in ar1[] be x, in ar2[] be y and in ar3[] be z
//     If x, y and z are same, 
//           we can simply print any of them as common element and move ahead in all three arrays.
//     Else If x < y and x < z, 
//          we can move ahead in ar1[] as x cannot be a common element.
//     Else If x > y and z > y, 
//         we can simply move ahead in ar2[] as y cannot be a common element.
//     Else If x > z and y > z, 
//         we can simply move ahead in ar3[] as z cannot be a common element.



#include <bits/stdc++.h> 
using namespace std; 
  

void findCommon(int ar1[], int ar2[], int ar3[],int n1, int n2, int n3)  
{ 
    
    int i = 0, j = 0, k = 0; 						// Initialize starting indexes for ar1[], ar2[] and ar3[]      
    while (i < n1 && j < n2 && k < n3 ) { 
    
         // If x = y and y = z, print any of them and move ahead  in all arrays 
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k] ) 
         {   
		    cout << ar1[i] << " ";   
			i++; j++; k++; 
		 } 
  
        
         else if (ar1[i] < ar2[j] && ar1[i]<ar3[k])        // x < y and x < z
             i++; 
  
         
         else if (ar2[j] < ar3[k] && ar1[i] >ar2[j])        // y < z and y < x
             j++; 
  
         else if(ar1[i]>ar3[k] && ar2[j]>ar3[k])            // z is smallest 
             k++; 
    } 
} 
  
// Driver program to test above function 
int main() 
{ 
    int ar1[] = {1, 5, 10, 20, 40, 80}; 
    int ar2[] = {6, 7, 20, 80, 100}; 
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}; 
    
    int n1 = sizeof(ar1)/sizeof(ar1[0]); 
    int n2 = sizeof(ar2)/sizeof(ar2[0]); 
    int n3 = sizeof(ar3)/sizeof(ar3[0]); 
      
  
    cout << "Common Elements are "; 
    findCommon(ar1, ar2, ar3,n1, n2, n3); 
    return 0; 
} 
