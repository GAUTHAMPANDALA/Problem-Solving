						// Given a large string find the reminder of the string with n	//
						


// Algorithm 

// Traverse for each element in string 
//  Convert string character one by one into digit and process as REGULAR DIVISION METHOD UNTILL WE GET FINAL REMINDER.
//   num = rem * 10 + (str[i] - '0'); 
//     rem = num % n; 
// Print the reminder.


#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return remainder 
int remainder(string str,int n) 
{ 
    // len is variable to store the 
    // length of number string. 
    int len = str.length(); 
  
    int num, rem = 0; 
  
    // loop that find remainder 
    for (int i = 0; i < len; i++) { 
        num = rem * 10 + (str[i] - '0'); 
        rem = num % n; 
    } 
  
    return rem; 
} 
  
// Driver code 
int main() 
{ 
    string str = "37978"; 
    int n=11;
    cout << remainder(str,n); 
    return 0; 
} 


