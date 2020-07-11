						// Find the nth bit 1 or 0
						
// formula (x<<(n-1) & 1)
// Logic: as we left shift n-1 bits, we reach to the nth position, then by doing and with 1 we get if it is 1 or 0.

#include<stdio.h>

int main()
{
	
	int n;
	scanf("%d",&n);
	
	int n2;
	scanf("%d",&n2);
	
	if((n<<(n2-1)&1)==1)
	{
		printf("The bit is at %dth position is  1",n2);
	}
	else
	{
		printf("The bit is at %dth position is  0",n2);
	}
	
	  
}
