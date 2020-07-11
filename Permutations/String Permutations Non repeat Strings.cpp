
			      //  Print all distinct permutation of a string having duplicates.


#include <bits/stdc++.h> 
using namespace std; 
  
// Returns true if str[curr] does not matches with any of the characters after str[start] 
bool shouldSwap(char str[], int start, int curr) 
{ 
    for (int i = start; i < curr; i++)  
        if (str[i] == str[curr]) 
            return 0; 
    return 1; 
} 
  
	void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void  permute(char *a, int l, int r) 
{ 
    if (l >= r) { 
       printf(" The string permuted is: ");
      puts(a); 
        return; 
    } 
  
    for (int i = l; i < r; i++) { 
  
        // Proceed further for str[i] only if it doesn't match with any of the characters  after str[index] 
        bool check = shouldSwap(a, l, i); 
        if (check) { 
             swap(a+l, a+i);   // cpp:  swap(a[l], a[i]);  
  
            // Recursion called  
             permute(a, l+1, r);  
  
            //backtrack  
             swap(a+l, a+i);  // cpp: swap(a[l], a[i]);  
        } 
    } 
} 
  
// Driver code 
int main() 
{ 
   	char str[100];
	gets(str);
    int n = strlen(str); 
    permute(str, 0, n); 
    return 0; 
} 
