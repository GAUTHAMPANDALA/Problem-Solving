							// Given the string reverse the words in that string //
		//Eg: i/p: i like programming very much 
		//   o/p: much very programming like i.
		
//Algorithm 
// First reverse the letters for all words in the  string.
// Now reverse the entire string to get output.


#include <stdio.h>
 
// Function to reverse any sequence starting with pointer begin and ending with pointer end
void reverse(char* begin, char* end)
{
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}
 
// Function to reverse words*/
void reverseWords(char* s)
{
    char* word_begin = s; //start point of the word.
    char* temp = s;   //  end point of the word.
 
    // Reversing individual letters in the words of the string
	    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;				// changing starting point to another word begining.
        }
    }
 
    reverse(s, temp - 1);    // Reverse the entire string
}
 
// Driver Code
int main()
{
    char s[] = "i like this program very much";
    char* temp = s;
    reverseWords(s);
    printf("%s", s);
    return 0;
}
