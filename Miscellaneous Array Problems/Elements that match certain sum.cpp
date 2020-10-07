						// Given an array of elements in sorted order find the pair of given sum //

// Algorithm
// As the element are in sorted order, We use double pointer method
// Start i from begin and j from end , add those elements , 
// if this sum > given_sum decrement j because we need less value and  else increment i pointer because we need more value.

#include <stdio.h>

int main()
{
 
    int a[]={1,2,4,4,5};
    int n=5;
    int s=0;
    int sum=8;
    int i=0,j=n-1;
    
    while(i<j)
    {
    	s=a[i]+a[j];     // sum of the last and first element.
    	
    	if(s>sum)
    	{
    		j--;        // decrease j, we need low a[j] value
		}
		if(s<sum)
		{
			i++;    // increase i, we need low a[i] value
		}
		else
		{
			printf("%d %d",a[i],a[j]);
			break;
		}
	}
	
	return 0;
}
