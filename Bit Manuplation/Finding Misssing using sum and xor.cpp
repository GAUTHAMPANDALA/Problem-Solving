// Here the numbers will be  n-1 integers and these integers are in the range of 1 to n and only one missing number. Find that number in o(n)


#include<stdio.h>
#include<math.h>

// Finding missing element by sum method. O(N) and O(1) can have overflow condition
void  findMissingSum(int a[],int n)
{
	int total = (n+2) * (n + 1) / 2; 
	int sum=0;
    for (int i = 0; i < n; i++)           // answer= [(n+2)*(n+1)/2] - totalsumof Array elements. 
        sum=sum+ a[i]; 
   printf("%d\n",total-sum); 
   
   /* To SKIP OVER FLOW CONDITION for every iteration pick one number from known numbers and subtract one number from given numbers.
       
     int sum=1;
     
     for(int i=2;i<=n+2;i++)     
     {
         c=a[i-2];    
	     s=s+a[i]-c;
     }
     
     printf("%d",s);
   
   */
}


// Finding missing elements by the XOR ==> O(2N+1) AND O(1)
void findMissingXOR(int a[],int n)
{
  
     int x1 = a[0]; 			
     int x2 = 1; 			
  
    for (int i = 1; i < n; i++) 
        x1 = x1 ^ a[i]; 				  // xor of all array elements  = x1
  
    for (int i = 2; i <= n + 1; i++) 
        x2 = x2 ^ i; 					 // xor of 1 to n+1 = x2
  
   printf("%d",(x1 ^ x2)); 				 // xor of x1,x2 ,ie ==> xor(xor(arrayelements),xor(1,n+1))  
   
   
   
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
	
	 findMissingSum(a,n);   //Finding missing number by sum
	 findMissingXOR(a,n);	//Finding missing number by XOR

}






