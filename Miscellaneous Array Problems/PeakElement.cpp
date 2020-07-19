					// Program is Peak element Search	//
// Given an array of integers. Find a peak element in it.An array element is a peak if it is greater than its neighbours. //
				//  For corner elements, we need to consider only one neighbour. //
				// Time Complexity is O(N) //

#include<stdio.h>

int peakelement(int arr[],int n)
{
	if(arr[0] > arr[1])  // at beginiing
      return 0; 
    if(arr[n-1] > arr[n-2])   // at end 
      return n-1; 
	  
	  for(int i=1 ; i < n-1 ; i++) 
    { 
      
      if(arr[i] > arr[i-1] && arr[i] > arr[i+1])  //check if the neighbours are smaller 
        return i; 
    } 	
	
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	

    int k=peakelement(a,n);
    
    printf("The peak element is: %d",a[k]);
}
