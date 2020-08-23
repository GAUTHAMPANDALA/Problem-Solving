							// Given an array calculate all subarray sum //
		// Given a[]={1,2,3,4} => 1+(1+2)+(1+2+3)+(1+2+3+4)+2+(2+3)+(2+3+4)+3+(3+4)+4 =>45. //
		
// Algorithm :
// 1. Traverse to array and calculate the each subbary sum and add that to total sum.
// 2. traverse each array and sum=sum+(a[i]*(n-i)*(i+1)).
#include <stdio.h>

int main()
{
 
    int a[]={1,2,3,4,5};
    int n=5;
     int sum=0;
     for(int i=0;i<n;i++)
    {
         int s=0;
        for(int j=i;j<n;j++)
        {
            s=s+a[j];   // calculate individual subarray sum while traversing the array.
            sum=sum+s; //  to add all subarray sum to final sum.
            // printf("%d ",s);
        }
        
        //printf("\n");
    }
    
    /* or
       for(int i=0;i<n;i++)
       {
       sum=sum+(a[i]*(n-i)*(i+1));
   }
   */
    printf("Total sum: %d",sum);
    return 0;
}

