					// Greedy Algorithm to find Minimum number of Coins //
	// Given a value V, if we want to make a change for V Rs, and we have an infinite supply of each of the denominations. //
			// what is the minimum number of coins and/or notes needed to make the change //
			
// Algorithm
//Sort the array of denominated coins in decreasing order.
// Initialize result as empty.
// Find the largest denomination that is smaller than current amount.
//  Add found denomination to result. Subtract value of found denomination from amount.
//   If amount becomes 0, then print result.
//  Else repeat steps 3 and 4 for new value of V.

#include <stdio.h> 
#define COINS 9 
#define MAX 20 
  
// All denominations of Indian Currency 
int coins[COINS] = { 1, 2, 5, 10, 20, 50, 100, 200, 2000 }; 
  
void findMin(int cost) 
{ 
    int coinList[MAX] = { 0 }; 
    int i, k = 0; 
  
    for (i = COINS - 1; i >= 0; i--) {  // Iterate throught the Denomination of coins.
        while (cost >= coins[i]) { 
            cost -= coins[i];            // Reduce the amount as its denomination is counted.
            coinList[k++] = coins[i];    // Add coin in the list 
        } 
    } 
  
    for (i = 0; i < k; i++) { 
       
        printf("%d ", coinList[i]); 
    } 
     
} 
  
int main(void) 
{ 
    int n = 93;   
    printf("Following is minimal number of change for %d: ", n); 
    findMin(n); 
    return 0; 
} 
	
