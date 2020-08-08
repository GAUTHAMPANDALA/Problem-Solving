								//  TOWER OF HANOI	//
					// We can solve this Problem using Recuursion and Stack //
							// We need (2^n-1) moves for n disks //
			// We want to inseret from Rod to A to C in such it shoul be in strictly increasing manner//
					
#include<stdio.h>

void solve (int n,char from_rod,char to_rod,char mid_rod)
{
     if(n==1)
	 {
	     printf("%d: %c -> %c\n",n,from_rod,to_rod); 
		 return;	
	 }	
	 solve(n-1,from_rod,mid_rod,to_rod);  // solve(n-1,'A','B','C').
	 printf("%d: %c -> %c\n",n,from_rod,to_rod); 	
	 solve(n-1,mid_rod,to_rod,from_rod);  // solve(n-1,'B','C','A').
}

int main()
{
	int n;
	scanf("%d",&n);	
	solve(n,'A','C','B'); // A is from rod, B is middle rod, C is To Rod.
}
