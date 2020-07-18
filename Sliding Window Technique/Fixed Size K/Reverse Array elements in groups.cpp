						// Program to reverse the array elements in groups //
						
				// Given an array of size n and window size k, reverse K elements in array. //  
				
#include<stdio.h>

void reverse (int a[],int n,int k)
{
	
int i;

  for(i=0;i<n;i=i+k)
  {
	int left=i;
	int right=i+k-1;
	
	if(i+k-1>n-1)
	{
		right=n-1;
	}
	 	
	while(left<right)
	{
		int temp=a[left];
		a[left]=a[right];
		a[right]=temp;
		right--;
		left++;
	}	
	
  }
}

int main(){
	
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,9}; 
    int k = 3; 
  
    int n =9; 
  
    reverse(arr, n, k); 
  
    for (int i = 0; i < n; i++) 
        printf("%d ",arr[i]);
  
    return 0;
}
