					// Rearrange array a[i] such that a[i] becomes a[a[i]]	//
		
 				// Given array of integers we need to replace a[i] value with a[a[i]]. //
 				
/* Algorithm:

			Logic is we need to store two values at one place the old value arr[i] && the new value arr[arr[i]] . 
  				So we can do this by following the steps:-

		Make all values arr[i] =arr[i] + (arr[arr[i]]%n)*n; ==> we doing (arr[arr[i]]%n) to limit the index size upto n.
		
						Dividing with N we get new value ie, arr[arr[i]].
						Moduling with N we get new value ie, arr[i].
						
   Proof:   if a,b are two values need to be stored at one place then do ==>  a+(b*n)
   												Now,  Dividing with N we get New value "B".
   												      Mouling with N we get old value  "A".
   												      
   			To limit any value upto N we use "%N".
   												      
*/
  #include<bits/stdc++.h>
  
  using namespace std;
  
  void rearrange(int arr[], int n) 
{ 
    // First step: Increase all values by (arr[arr[i]]%n)*n 
    for (int i=0; i < n; i++) 
        arr[i] = arr[i] +(arr[arr[i]]%n)*n; 
  
    // Second Step: Divide all values by n 
    for (int i=0; i<n; i++) 
        arr[i] /= n; 
} 
  
// A utility function to print an array of size n 
void printArr(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
  
  int main()
  {
  	int arr[] = {3, 2, 0, 1}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << "Given array is \n"; 
    printArr(arr, n); 
  
    rearrange(arr, n); 
  
    cout << "Modified array is \n"; 
    printArr(arr, n); 
    return 0; 
  }

					
