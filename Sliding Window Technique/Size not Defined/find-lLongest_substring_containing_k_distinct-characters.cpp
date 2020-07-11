// C++ program to find the longest substring with k unique characters in a given string, by sliding window

		// Here Traverse String Linearly update WINDOW END Continusly, but Update WINDOW START by considering problem constraints,
		// Now Update MAXIMUM WINDOW SIZE using WINDOW START AND WINDOW END, and Make WINDOW START as Current START.
		
	// Link:  https://medium.com/outco/how-to-solve-sliding-window-problems-28d67601a66
#include <iostream> 
#include <cstring> 
#define MAX_CHARS 26 
using namespace std; 
  
// This function calculates number of unique characters, using a associative array count[].
bool isValid(int count[], int k) 
{ 
    int val = 0; 
    for (int i=0; i<MAX_CHARS; i++) 
        if (count[i] > 0) 
            val++; 
    return (k >= val);  // Return true if k is greater than or equal to val 
} 
  
// Finds the maximum substring with exactly k unique chars 
void kUniques(string s, int k) 
{ 
    int n = s.length(); 
     int count[MAX_CHARS]; 		// Associative array to store the count of characters 
     int curr_start = 0, curr_end = 0;  // start and end variables. 
    int max_window_size = 1, max_window_start = 0;  // Also initialize values for result longest window 
    memset(count, 0, sizeof(count));   // Initialize associative array count[] with zero 
    count[s[0]-'a']++;  // put the first character Start and from the second character and add  characters in window 
    for (int i=1; i<n; i++) 
    { 
        
        count[s[i]-'a']++;  // Add the character 's[i]' to current window 
        curr_end++;   
        // If there are more than k unique characters in  current window, then increase current window start.
         
        while (!isValid(count, k)) 
        { 
            count[s[curr_start]-'a']--; 
            curr_start++; 
        }   
        // Update the max window size, we need to update the window size if the current window size great than max window size.
       if (curr_end-curr_start+1 > max_window_size) 
        { 
            max_window_size = curr_end-curr_start+1; 
            max_window_start = curr_start; // As the current start wil be window starting index.
        } 
    } 
  
    cout << "Max sustring is : "
         << s.substr(max_window_start, max_window_size) 
         << " with length " << max_window_size << endl; 
} 
  

int main() 
{ 
    string s ;
	cin>>s;
	int k;
	cin>>k; 
    kUniques(s, k); 
    return 0; 
} 
