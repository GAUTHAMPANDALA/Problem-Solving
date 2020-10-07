	// Given You are given an unordered array consisting of consecutive integers  [1, 2, 3, ..., n] without any duplicates. //
		// You are allowed to swap any two elements. Minimum no of swaps needed for this to get sorted //
		
// Algorithm 
// Traverse each emlement of the array
// IF the element is correct place ie, a[i]==i+1 then go to next element.
// else swap the current element with the current element index and increment count. Ie swap(a[i],a[a[i]-1]). 
		

#include <stdio.h>

int swap(int *a,int *b)
{
	int t;
	 t=*a;
	*a=*b;
	*b=t;
}

int main()
{
 
    int a[]={2,3,4,1,5};
    int n=5;
    
    int c=0;  // to count swaps    
    for(int i=0;i<n;)
    {
    	if(a[i]==i+1)  // element in same position, go to next element.
    	{
    		i++;    	
		}
		
		else
		{
			swap(&a[i],&a[a[i]-1]); // swap the current element and the element at the position of the a[i]. 
			c++;			  //  do above process untill we reach correct position.
		}
	}
	
	printf("%d",c);	
}
