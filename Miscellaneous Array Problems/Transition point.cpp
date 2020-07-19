				        	// Find the Transistion point //
				// Given an array of 0,1 in sorted, find the min index in which the elements transition to 0 and 1 //
						// We perform Binary search and the terminate condition is a[mid]=1 and a[mid-1] =0 //
		
#include<stdio.h>

void findtransitionpoint(int a[],int l,int h)
{
	
	while(l<=h){

  int mid=(l+h)/2;
  
  if(a[mid]==0)
  {
  	l=mid+1;
  }
  
  else 
  {
       if (a[mid]==1)
       {
       	
       	if(a[mid-1]==0)
       	 {
       	     printf("The index is %d",mid);
		 }
       }
	   
	   	h=l-1;
  }
	
}
}



int main()
{
	int a[]={0,0,0,0,0,1,1,1};
	int n=7;
	
	findtransitionpoint(a,0,n);
	
}
