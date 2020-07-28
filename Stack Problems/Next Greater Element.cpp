
			//   Next Greater Element using Stack, Linear Time Complexity.
			
			
#include<iostream>
#include <stack> 
using namespace std; 

int calculateNextGreatElement(int a[],int n){

   stack < int > s; 
   int l[n],j=0; // L[J] is array to store the next greater elements according to their index.
   s.push(a[0]); 
    for (int i = 1; i < n; i++) {   
    if (s.empty()) { 			 			// If stack empty push, as to compare st[top] elemnt with rest of eleemts.
      s.push(a[i]); 
      continue; 
    }   
    while (s.empty() == false &&  a[i]<cs.top()){ 		// if stack is not empty, and st[top]<a[i] then print st[top] and pop() top element.
       l[j]=a[i];
       // cout << s.top() << " --> " <<l[j] << endl; 
        j++;
        s.pop(); 
    }  
    s.push(a[i]);   						// Push the index into stack as it is already processed.
  } 

  while (s.empty() == false) {
  	l[j]=-1;
     // cout << s.top() << " --> " << l[j]<< endl;  		  // As the top elemnts do not contain next higher digits, then print -1.
    j++;s.pop(); 
  }
  
  for(int j=0;j<n;j++)
  {
  	cout<<l[j]<<" ";
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
