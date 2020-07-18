
						// SLIDING WINDOW TECHNIQUE //
				// C Program to Find the Distinct elemets in the Subaaray of size K //.
			 // We  use (hash techniqes/hash map) to solve this problem, as this take o(k) space.//

#include <iostream>
#include <map>
using namespace std;

void countDistinct(int arr[],int k,int n)
{
	
	map<int,int> hm;
	int i,dist_count=0;
	for(i=0;i<k;i++)			// calculate distinct elements for first window.
	{
	    if (hm[arr[i]] == 0) { 
            dist_count++; 
        } 
        hm[arr[i]] += 1; 	
	} 
      printf("distinct elements between %d and %d is %d \n",i-k,i,dist_count);
	
	for(int i=k;i<n;i++)
	{
		
	  if (hm[arr[i-k]] == 1) {  // as window going to change delete the i-kth dist_count, as we dont consider it.
            dist_count--; 
        } 
        
        hm[arr[i-k]]--;  // as window going to change delete the i-kth  occurance.
        
        if(hm[arr[i]]==0)
        {
        	dist_count++; 
		}
		hm[arr[i]] += 1; 
		
	  printf("distinct elements between %d and %d is %d \n",i-k,i,dist_count);
        
	}
}

int main()
{
    int arr[] = { 1, 2, 1, 3, 4, 2, 3 }; 
    int size = 7; 
    int k = 4; 
    countDistinct(arr, k, size); 
  
    return 0; 
}
