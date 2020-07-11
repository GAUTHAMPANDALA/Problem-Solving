
			//   Next Greater Element using Stack, Linear Time Complexity.
			
			
#include<iostream>
#include <stack> 
using namespace std; 

int calculateNextGreatElement(int a[],int n){
stack < int > s; 
  s.push(a[0]); 
    for (int i = 1; i < n; i++) {   
    if (s.empty()) { 			 						  // If stak empty push, as to compare st[top] elemnt with rest of eleemts.
      s.push(a[i]); 
      continue; 
    }   
    while (s.empty() == false &&  a[i]> s.top()){ 		// if stack is not empty, and st[top]<a[i] then print st[top] and pop() top element.
        cout << s.top() << " --> " << a[i] << endl; 
        s.pop(); 
    }  
    s.push(a[i]);   									// 	// Push the index into stack as it is already processed.
  } 

  while (s.empty() == false) {
    cout << s.top() << " --> " << -1 << endl;  		  // As the top elemnts do not contain next higher digits, then print -1.
    s.pop(); 
  } 
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
	calculateNextGreatElement(a, n);         
}
