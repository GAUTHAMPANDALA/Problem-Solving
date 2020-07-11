
    /// Stock, Buy and sell to maximum profit.


#include<stdio.h>

void stockBuySell(int a[], int n) 
{ 
    
    if (n == 1) 	// Prices must be given for at least two days.
        return; 
  
    int i = 0;     // Traverse through given price array linearly and find local minmum and maximum.
    
    while (i < n - 1) { 
	  
        
        while ((i < n - 1) && (a[i + 1] <= a[i]))   	   // Find Local Minima(a[i]<=a[i-1]) then buy, limit is (n-2) 
            i++; 										   	       //increment index
   
        if (i == n - 1) 									  	 // If we reached the end, break.
            break; 
  
       int buy = i; 											// Store the index of minima,buy.
		i++;  													//Increment the index.
  
        
        while ((i < n) && (a[i] >= a[i - 1])) 			// Find Local Maxima(a[i]>=a[i-1]) then sell,limit is (n-1)
            i++; 
            
        int sell = i - 1;   		 					// Store the index of maxima as one index is incremented, we should decrement by 1.
        
        printf( "Buy on day: %d and Sell on day:%d \n",buy,sell);
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
	stockBuySell(a,n);
}
