			// We get minium and Max eleemnt in stack with O(1),O(1) Time and Space Complexity from stack
		// LINK: https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/
// THe idea is, Here we fine min element while in Push and in pop, and store minimum element in minEle variable.			
	    //to handle the case when minimum element is removed.
		// To handle this," we push “2*x – minEle” into the stack instead of x, while pop make minEle as "2*minEle-x" "
		// "if(x<minEle) else push directly. and min element = 2*minEle-x., and update for each pop and push.
		// so that previous minimum element can be retrieved using current minEle and its value stored in stack.
		
// THe idea is, Here we fine max element while in Push and in pop, and store minimum element in maxEle variable.			
	     //to handle the case when maximum element is removed.
		 // To handle this, "we push “2*x – maxEle” into the stack instead of x, while pop make maxEle as"2*maxEle-x" "
	     // "if(x>maxEle) else push directly. and max element = 2*maxEle-x." and  update for each pop and push.
		 // so that previous minimum element can be retrieved using current minEle and its value stored in stack.


#include <bits/stdc++.h> 
using namespace std; 
  
// A user defined stack that supports getMin() in addition to push() and pop() 
struct MyStack 
{ 
    stack<int> s; 
    int minEle; 
    void getMin() 		// Prints minimum element of MyStack 
    { 
        if (s.empty()) 
            cout << "Stack is empty\n"; 
  
        // variable minEle stores the minimum element  in the stack. 
        else
            cout <<"Minimum Element in the stack is: "
                 << minEle << "\n"; 
    } 
  
    void peek() 											// Prints top element of MyStack 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty "; 
            return; 
        } 
  
        int t = s.top(); // Top element. 
  
        cout << "Top Most Element is: "; 
		(t < minEle)? cout << minEle: cout << t; 		// If t < minEle means minEle stores  value of t. 
    } 
  
    
    void pop() 											// Remove the top element from MyStack 
    { 
        if (s.empty()) 
        { 
            cout << "Stack is empty\n"; 
            return; 
        }   
        cout << "Top Most Element Removed: "; 
        int t = s.top(); 
        s.pop();   									// Pop every elemnt.
        if (t < minEle) 							// and Change the minimum element as  of the stack as it is being removed. 
        { 	
            cout << minEle << "\n";   			// Print Min Eleemnt
            minEle = 2*minEle - t;  			  // Update Min elemnet as 2*minEle - t, reverting back to previous min element.
        } 
  
        else
            cout << t << "\n"; 
    } 
  
    
    void push(int x) 						// Removes top element from MyStack 
    { 
        
        if (s.empty()) 						// Insert new number into the stack and make the inserted eleemnt as minimum elemet
        { 
            minEle = x; 
            s.push(x); 
            cout <<  "Number Inserted: " << x << "\n"; 
            return; 
        }   
       if (x < minEle) 					 // If new number is less than minEle, 
		{
		    s.push(2*x - minEle);  
            minEle = x;  				//Update minimum Element.
        } 
        else
           s.push(x); 
  
        cout <<  "Number Inserted: " << x << "\n"; 
    } 
}; 
  
// Driver Code 
int main() 
{ 
    MyStack s; 
    s.push(3); 
    s.push(5); 
    s.getMin(); 
    s.push(2); 
    s.push(1); 
    s.getMin(); 
    s.pop(); 
    s.getMin(); 
    s.pop(); 
    s.peek(); 
  
    return 0; 
} 
