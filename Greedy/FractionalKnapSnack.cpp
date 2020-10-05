			// Given weights and values of n items, we need to put these items in a knapsack of capacity W //
						// to get the maximum total value in the knapsack. //
						
// Here we need to select value that have more value/weight ratio and proceed further 
// because those jobs will have low weight and high values.
// We take those values and if the weights of taken values is more than the given weight 
// we need to add the fractional part of the value for that particular weight.

// Algorithm
// sorting Item on basis of ratio ie, [value/weight] in descending order  
// Then take the item with the highest ratio and add them until we can’t add the next item as a whole
// at the end add the next item as much as we can. Which will always be the optimal solution to this problem


#include <bits/stdc++.h> 
  
using namespace std; 
  
// Structure for an item which stores weight and value of Item 
struct Item 
{ 
    int value, weight;      
}; 
  
// Comparison function to sort Item according to val/weight ratio in decending order.
bool cmp(struct Item a, struct Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 
  

double fractionalKnapsack(int W, struct Item arr[], int n) 
{ 
    
    sort(arr, arr + n, cmp);         //    sorting Item on basis of ratio 
      
    for (int i = 0; i < n; i++)  	//  new order of Items with their ratio 
    { 
        cout << arr[i].value << "  " << arr[i].weight << " : "<< ((double)arr[i].value / arr[i].weight) << endl; 
    } 
    
  
    int curWeight = 0;  // Current weight in knapsack 
    double finalvalue = 0.0; // Result (value in Knapsack) 
  
    
    for (int i = 0; i < n; i++) 
    {         
        if (curWeight + arr[i].weight <= W) 	// check current weight and array weight is less than given weight
        { 
            curWeight  += arr[i].weight;   // To keep track of weight 
            finalvalue += arr[i].value;    // Keep rack of the all values taken.
        } 
         
        else 										// If we can't add current Item, add fractional part of it 
        { 
            int remain = W - curWeight; 	// The remaininig weight that can be added is [Weight - Currweight].
            finalvalue += arr[i].value * ((double) remain / arr[i].weight); // adding the fraction of that respective value.
            break; 
        } 
    } 
  
   return finalvalue;  
} 
  
// driver program to test above function 
int main() 
{ 
    int W = 50;   //    Weight of knapsack 
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}}; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Maximum value we can obtain = "<< fractionalKnapsack(W, arr, n); 
    return 0; 
} 
