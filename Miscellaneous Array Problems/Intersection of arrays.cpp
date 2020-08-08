							//   Intersection of Two Sorted Arrays //
	       // Given a1[[],a2[] two sorted arrays find the Intersection of them in O(M+N) //
	       
	//   Iterate both i,j from to n,m.
	//  if(a1[i]<a2[j]) then i++.
	//  else if(a1[i]>a2[j]) then j++.
	//  else add   only a1[i]  to vector v1 and i++,j++.
	//  now take another vector and store elmeents such that v[i-1]!=v[i].
	// return new vector.

#include<stdio.h> 
  
/* Function prints union of arr1[] and arr2[] 
   m is the number of elements in arr1[] 
   n is the number of elements in arr2[] */
int printIntersec(int arr1[], int arr2[], int m, int n) 
{ 
   vector<int> v;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            
            j++;
        }
        else if(arr1[i]<arr2[j]){
           
            i++;
        }
        else{
           v.push_back(arr1[i]);
            
            i++;
            j++;
        }
    }
   
    
    vector<int> v1;
    v1.push_back(v[0]);
    for(int k=1;k<v.size();k++){
        if(v[k-1]!=v[k]){
            v1.push_back(v[k]);
        }
    }
    return v1;
    
} 
  
/* Driver program to test above function */
int main() 
{ 
  int arr1[] = {1, 2, 4, 5, 6}; 
  int arr2[] = {2, 3, 5, 7}; 
  int m = sizeof(arr1)/sizeof(arr1[0]); 
  int n = sizeof(arr2)/sizeof(arr2[0]); 
  printIntersec(arr1, arr2, m, n); 
  getchar(); 
  return 0; 
} 
