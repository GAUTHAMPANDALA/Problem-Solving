							//   Unioun of Two Sorted Arrays //
	       // Given a1[[],a2[] two sorted arrays find the unioun of them in O(M+N) //
	       
	//   Iterate both i,j from to n,m.
	//  if(a1[i]<a2[j]) add a1[i] and i++.
	//  else if(a1[i]>a2[j]) add a1[i] and j++.
	//  else add any a1[i] or a2[j] and i++,j++.
	// push remaining elements in a1[],a2[].
	// return vector.

#include<stdio.h> 
  
/* Function prints union of arr1[] and arr2[] 
   m is the number of elements in arr1[] 
   n is the number of elements in arr2[] */
int printUnion(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) {
      printf(" %d ", arr1[i]); 
      i++;
     }
    else if (arr2[j] < arr1[i]) {
      printf(" %d ", arr2[j++]); j++;
	  }
    else
    { 
      printf(" %d ", arr2[j++]); 
      i++; 
    } 
  } 
  
  /* Print remaining elements of the larger array */
  while(i < m) {
   printf(" %d ", arr1[i]); i++;
  }
  while(j < n) {
   printf(" %d ", arr2[j]); j++;}
} 
  
/* Driver program to test above function */
int main() 
{ 
  int arr1[] = {1, 2, 4, 5, 6}; 
  int arr2[] = {2, 3, 5, 7}; 
  int m = sizeof(arr1)/sizeof(arr1[0]); 
  int n = sizeof(arr2)/sizeof(arr2[0]); 
  printUnion(arr1, arr2, m, n); 
  getchar(); 
  return 0; 
} 
