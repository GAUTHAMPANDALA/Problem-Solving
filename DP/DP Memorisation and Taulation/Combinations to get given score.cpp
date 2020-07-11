//  Given Points(3,10,5) of Game find the possibiltes to get a Given score n.

#include<stdio.h>

// Count Function.

int count(int n) 
{ 
    // table[i] will store count of solutions for value i. 
    int table[n+1], i; 
  
    // Initialize all table values as 0 
    for(int j = 0; j < n + 1; j++) 
            table[j] = 0; 
  
    // Base case 
    table[0] = 1; 
  
// One by one consider given 3 moves and update the table[] values after the index   >= to the  value of the picked move. 
    for (i=3; i<=n; i++) 
       table[i] += table[i-3]; 
    for (i=5; i<=n; i++) 
       table[i] += table[i-5]; 
    for (i=10; i<=n; i++) 
       table[i] += table[i-10]; 
  
    return table[n];     // This Determine the total ways of getting score.
} 


int main()
{
	int n;
	scanf("%d",&n);
	int k=count(n);
	printf(" the no.of ways for scoring the  %d is %d",n,k);
}


