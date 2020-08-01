				// GENERATE BINARY NUMBERS FROM 1 TO N IN O(n*LOGN) USING QUEUE //
		// Here we use queue for generating 1 to N elements for case of timecomplexity //
		
#include<bits/stdc++.h>
using namespace std;

void generatePrintBinary(int n) 
{ 
    // Create an empty queue of strings 
    queue<string> q; 
  
    // Enqueue the first binary number 
    q.push("1"); 
  
    // This loops is like BFS of a tree with 1 as root 
    // 0 as left child and 1 as right child and so on 
    while (n--) 
    { 
        // print the front of queue 
        string s1 = q.front(); 
        cout << s1 << "\n"; 
        q.push(s1+"0"); 	// Add "0" to s1 and enqueue it 
        q.push(s1+"1"); 	// Add "1" to s1 and enqueue it
        q.pop();
    } 
} 
  
// Driver program to test above function 
int main() 
{ 
    int n = 10; 
    generatePrintBinary(n); 
    return 0; 
} 
