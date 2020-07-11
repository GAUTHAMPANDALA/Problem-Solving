
				// A stack based efficient method to calculate stock span values. Linear Time Complexity.
				// Link: https://www.youtube.com/watch?v=AKN3Hq_aGOc

     //  Stock Span problem using Stacks Application. ==>O(n) Time and Space.

     // As to keep track the processed elements we can use stack.
     
#include <iostream> 
#include <stack> 
using namespace std; 
  

void calculateSpan(int price[], int n, int S[]) 
{ 
    stack<int> st;  //Stack Creation
    st.push(0);   // Push index of first element to it, as we have to start from begining of array.
     S[0] = 1;    // Span value of first element is always 1, as no element is before it. 
  
    // Calculate span values for rest of the elements. 
    for (int i = 1; i < n; i++) { 
        
        while (!st.empty() &&  price[i]>=price[st.top()])     // Pop elements from stack when  price[i]>=price[st.top()]
            st.pop(); 
  
        S[i] = (st.empty()) ? (i + 1) : (i - st.top());      //  Span will be as ==> i-stack[top], (or) i+1.
         st.push(i);  					   			    	// Push the index into stack as it is already processed.
    } 
} 
  
// A utility function to print elements of array 

void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Driver program to test above function 

int main() 
{ 
    int n;
	cin>>n;
	int price[n];
	for(int i=0;i<n;i++)
	{
		cin>>price[i];
    } 
    int S[n];     
    calculateSpan(price, n, S);    // Fill the span values in array S[]     
    printArray(S, n);   // print the calculated span values   
    return 0; 
} 
