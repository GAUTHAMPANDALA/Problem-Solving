			// Program to find the longest rectangle formed by Histogram in Linear Time.
			
	// This is the Stack implementation, we use 1 stacks for indexes of heights of rectangle.
	// The agenda is to push the elemts that are greater than a[i], so that they can make maximum area.
	
	// Maximum Area we can get, if the eleemnts greater than a[i] must be neigbours, so to satisfy this condition, we push() those elemnts.
	
	// Th main procedure is make else max=0, and push if  a[i]>a[s[top],else pop(),calculate current area and print maximum(max,current_area).

	
#include<bits/stdc++.h> 
using namespace std; 

 
// The main function to find the maximum rectangulararea under given histogram with n bars 
int getMaxArea(int a[], int n) 
{ 
    // Create an empty stack. The stack holds indexes  of a[] array. The bars stored in stack are always in increasing order. 
    stack<int> s; 
  
    int max_area = 0; // Initialize max area 
    int tp;  // To store top element of stack 
    int area_with_top; // To store area with top baras the smallest bar 
  
    // Run through all bars of given histogram 
    int i = 0; 
    while (i < n) 
    { 
        // If this bar is higher than the bar on top  stack, push it to stack because we need those index as neighbpurs
        if (s.empty() || a[i]>=a[s.top()] ) 
            s.push(i++); 
  
        // If this bar is lower than top of stack, then pop the stack and calculate area of rectangle with stack[top]
        else
        { 
            tp = s.top();  // store the top index 
            s.pop();  // pop the top 
  
            // Calculate the area with hist[tp] stack  as smallest bar ==> (i -stack[top]-1) * a[i]
            area_with_top = a[tp] * (s.empty() ? i :i - s.top() - 1); 
  
            
            if (max_area < area_with_top)  // update max area
                max_area = area_with_top; 
        } 
    } 
  
    // Now pop the remaining bars from stack and calculate  area with every popped bar as the smallest bar, if stack is not empty. 
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        // Calculate the area with hist[tp] stack  as smallest bar ==> (i -stack[top]-1) * a[i]
        area_with_top = a[tp] * (s.empty() ? i :i - s.top() - 1); 
  
        if (max_area < area_with_top)   // update max area
            max_area = area_with_top; 
    } 
  
    return max_area; 
} 

int main() 
{ 
    int n;
    cin>>n;
     int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
    cout << "Maximum area is " << getMaxArea(a, n); 
    return 0; 
} 
