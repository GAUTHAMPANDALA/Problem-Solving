					// Given two strings and  result should be multipication of strings//
			 	//  Eg:  num1="44" and num2="2" => num1*num2 = 44*2 =88. result in string format. //
			 	//  Eg:  num1="-85" and num2=" 5" ==> num1*num2 = -85*5= -425 result in string format //
			 	
//  Algorithm 
//  The multipication is same as normal multipication carry storing in a resultant arrays.
//  Adding carry with the new multiplied numbers.
// same procedure as high chool math
// The vector stores elements in this format
//            a[i+j+1] = num1(n) * num2(n)  ==> multiipication result is stored
//			  a[i+j]= a[i+j]+ (a[i+j+1]/10) ==> This stores and adds carry to before elements.
//			  a[i+j+1]=a[i+j+1]%10 ==> seperates unit place and carry.
// The vector is now converrted to string.


#include<bits/stdc++.h>
using namespace std;

void  stringmul(string num1,string num2)
{
	
    if (num1 == "0" || num2 == "0") // returns 0 formul.
    {
    	cout<<0;
    	return ;
	}
     if((num1.at(0) == '-' || num2.at(0) == '-') && (num1.at(0) != '-' || num2.at(0) != '-' )) // negative symbol.
		cout<<"-"; 


    	if(num1.at(0) == '-' && num2.at(0)!='-') 
		{ 
			num1 = num1.substr(1); 
		} 
		else if(num1.at(0) != '-' && num2.at(0) == '-') 
		{ 
			num2 = num2.substr(1); 
		} 
		else if(num1.at(0) == '-' && num2.at(0) == '-') 
		{ 
			num1 = num1.substr(1); 
			num2 = num2.substr(1); 
		} 
  
        
// num1.size() + num2.size() == max no. of digits
// This vector is used to store carry  of right mul elements and result of right mul elements and add them respectievly.

        vector<int> num(num1.size() + num2.size(), 0); 
        
        // build the number by multiplying one digit at the time
        for (int i = num1.size() - 1; i >= 0; --i) {
            for (int j = num2.size() - 1; j >= 0; --j) { // if num1[len-1]=5 and if num2[len-1]=2, then 
                num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0'); // a[i+j+1]=5*2=10;
                num[i + j] += num[i + j + 1] / 10;  // a[i+j]=a[i+j]+((5*2)/10)=1
                num[i + j + 1] %= 10;           // a[i+j+1]=a[i+j+1]%10 = 10%10 =0;
            }
        }
        
        // skip leading 0's
        int i = 0;
        while (i < num.size() && num[i] == 0) ++i;
        
        // transofrm the vector to a string
        string res = "";
        while (i < num.size()) res.push_back(num[i++] + '0');
        
        cout<<res;
		return ;	
}

int main()
{
	string a;
	string b;
	cin>>a>>b;
 	stringmul(a,b);
}	 	
