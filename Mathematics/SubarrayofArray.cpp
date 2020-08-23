							// Given an array of integers print all subarrays //
				        // Given a[]={1,2,3} => [1],[1,2],[1,2,3],[2],[2,3],[3]. //
				        
				        
		
// Algorithm :
// 1. Traverse array such that we find start index for one loop and other for end index for another loop. 
// 2. now print elments based on this indexes.



#include <stdio.h>

int main()
{
 
     int a[]={10,3,7};
     int n=3;
    
     for(int i=0;i<n;i++)        // loop for start index.
    {
        
        for(int j=i;j<n;j++)       // loop for end index.
        {
              for(int k=i;k<=j;k++)   // traversing through to start and end index.
			  {
			  	printf("%d ",a[k]);
			  }   
			  printf("\n");            
        }		     
    }    
    return 0;
}
