							// Given an array calculate all subarray product //
		// Given a[]={1,2,3,4} => 1*(1*2)*(1*2*3)+(1*2*3*4)*2*(2*3)*(2*3*4)*3*(3*4)*4 =>145. //
		
// Algorithm :
// 1. Traverse to array and calculate the each subbary product and again product that with the total product.


#include <stdio.h>

int main()
{
 
     int a[]={10,3,7};
     int n=3;
     int product=1;
     for(int i=0;i<n;i++)
    {
         int p=1;
        for(int j=i;j<n;j++)
        {
            p=p*a[j];           // calculate individual subarray product while traversing the array.
            product=product*p; //  to muldiply all subarray product to final product.            
        }      
    }
    
   
    printf("Total product: %d",product);
    return 0;
}

