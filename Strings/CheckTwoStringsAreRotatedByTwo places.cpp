						// Check two strings are rotated by two places//
		// Given two strings s1,s2 check whether the string2 is rotated of string 1//
					// Timecomplexity: O(1) and space complexity: O(n)	//
		
// Algorithm
//  Here, we take a new_string of size N, and use that string to concat string2 as left and right rotation.
// Now will compare this new_string to String1 and answer will be any one of the rotated string else No.
//  ie, answer = (Str1.comp(new_string_left rotated) or  Str1.comp(new_string_right rotated)).
	
#include<bits/stdc++.h> 
using namespace std; 
  
// Function to check if string2 is obtained by  string 1 
bool isRotated(string str1, string str2) 
{ 
    if (str1.length() != str2.length()) 
        return false;   
    string check= ""; 
    int len = str2.length();     
    check = check+ str2.substr(len-2, 2) + str2.substr(0, len-2) ;  // Initialize string as anti-clockwise rotation 
     if(str1.compare(check) == 0)
     {
     	return true;
	 }
	 check="";      
    check = check + str2.substr(2) + str2.substr(0, 2) ;  // Initialize string as clock wise rotation 
    return (str1.compare(check) == 0);  // check if any of them is equal to string1 
} 
  
// Driver code 
int main() 
{ 
    string str1 = "geekss"; 
    string str2 = "eksgee"; 
  
    isRotated(str1, str2) ? cout << "Yes"
                          : cout << "No"; 
    return 0; 
} 
