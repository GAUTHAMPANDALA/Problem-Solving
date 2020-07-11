
// Here we give n+1 integers from 1 to n where only digit is repeating. Find it in O(n) linear Time.


#include<stdio.h>



int findRepeatitingXOR(int a[],int n)
{

   int i,xorr=a[0];
   for(i=1;i<n;i++)
   {
      xorr^=a[i]^i;   	// as x^x=0 and x^a^x=0^a=a; this finds repeatiting elements in the array.ie, xor1=(xor1)^(a[i]^i).
   }
   
   printf("%d",xorr);	
	
}


int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	 
	 findRepeatitingXOR(a,n+1);	//Finding missing number by XOR

}
