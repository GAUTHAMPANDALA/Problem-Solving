						// Array Rotation using JUGLLING ALFORITHM	//
						
			// Given Array rotate the k elements of the array, Time: O(n) and Space: O(1).//
			
#include<stdio.h>

int gcd(int a,int b)
{
if (b == 0)
        return a;

    else
        return gcd(b, a % b);
}

int arrayrotate(int arr[],int n,int d)
{
    int g_c_d=gcd(n,d);	
    
    int k;
   
    for (int i = 0; i <g_c_d; i++) {
        /* move i-th values of blocks */
        int j=i;
        int temp = arr[i];
        while (1) { 
            k = j + d; 
            if (k >= n)      // if Array out of index,then decrement.
                k = k - n; 
            if (k == i)     // Break if we reach the staring position.
                break; 
            arr[j] = arr[k]; 
            j = k; 
        } 
        arr[j] = temp;  //insert the temp element into array correct position.
    }
}


int main()
{
  int	arr[] = {2,4,6,8,10,12,14,16,18,20};
  int n=10, d=3;
  arrayrotate(arr,n,d);  
  
  for(int i=0;i<n;i++)
  {
  	printf("%d ",arr[i]);
  }
}
	
	
