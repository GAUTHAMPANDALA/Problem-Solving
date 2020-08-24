						// Given an number and convert them to string //
						//  Given n=101 => Roman conversion "MI" //
						    // This is string based problem //

// Algorithm
// Here we store predefined symbols and respective digits in an array.
// we traverse from great to small numbers and decrease number and append respective symbol to string.



#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string romans[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int nums[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    int myNum = n;
    int i = 12;
    for(i=12; i>=0; i--)
    {
        while(myNum>=nums[i])
        {
            result = result + romans[i];
            myNum = myNum - nums[i];
        }
    }
        cout<<result;
	
}
