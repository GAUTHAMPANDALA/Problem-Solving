

							   // Reccursive Staircase problem in DynamicProgramming.
    	// There are n stairs, a person standing at the bottom wants to reach the top. 
	// The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top.
	// As we can reach n stairs in 2 ways ie, ways(n-2) or way(n-1), This stair case is as the fibbonaci, ech step adds their preceding steps.
	// ways(n)=ways(n-1)+ways(n-2), this represents fibonnaci numbers as ways(n) represents fibbonai(n+1).
	
	
#include<stdio.h> 
 
 int fib(int n) 					// A simple recursive program to find the fibonacci number, ie ways(n)=fibonnaci(n+1)
{ 
   if (n <= 1) 
      return n; 
   return fib(n-1) + fib(n-2); 
} 
  
int countWays(int n) 
{ 
    return fib(n + 1); 				// Returns number of ways to reach n'th stair.
} 
  
// Driver program to test above functions 
int main () 
{ 
  int s;
  scanf("%d",&s); 
  printf("Number of ways = %d", countWays(s)); 
  return 0; 
}
