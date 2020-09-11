
			// Next Permutation of the Given array. as 123 --> 132, 132 --> 213, 115-151, 321 -> 123.
			// C++ program to find the smallest number which greater than a given number \
			 // and has same set of digits as given number 
// Algorithm and Obervation.
// if all digits sorted in descending order, then output is always “Not Possible”. For example, 4321.
// If all digits are sorted in ascending order, then we need to swap last two digits. For example, 1234.
// For other cases, we need to process the number from rightmost side, like in code.


#include<bits/stdc++.h>
using namespace std;

void swap(char *a, char *b) 
{ 
    char temp = *a; 
	*a = *b; 
	*b = temp; 
} 

void nextpermutation(char number[],int n)
{
	  	int i, j; 

	// I) Start from the right most digit and find the first digit that is 
	// smaller than the digit next to it. 
	for (i = n-1; i > 0; i--) 
		if (number[i] > number[i-1]) 
		break; 

	// If no such digit is found, then all digits are in descending order 
	// means there cannot be a greater number with same set of digits 
	if (i==0) 
	{ 
		cout << "Next number is not possible"; 
		return; 
	} 

	// II) Find the smallest digit on right side of (i-1)'th digit that is 
	// greater than number[i-1] 
	int x = number[i-1], smallest = i; 
	for (j = i+1; j < n; j++) 
		if (number[j] > x && number[j] < number[smallest]) 
			smallest = j; 

	// III) Swap the above found smallest digit with number[i-1] 
	swap(&number[smallest], &number[i-1]); 

	// IV) Sort the digits after (i-1) in ascending order 
	sort(number + i, number + n); 

	cout << "Next number with same set of digits is " << number; 

	return; 

}



int main()
{
     char digits[] = "12453"; 
	 int n = strlen(digits); 
     nextpermutation(digits,n);    
    
}
