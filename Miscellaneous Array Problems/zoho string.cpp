#include<bits/stdc++.h>

using namespace std;

int main(){
	
	
 string s1="374291--*+-";

  vector<int> v;
  vector<char> c;
  int s=0;
  for(int i=0;i<s1.length();i++)
  {
  	    if(s1[i]>='0' && s1[i]<='9')
  	    {
  	       v.push_back(s1[i]-'0');	
		}
		
		if(s1[i]=='+' || s1[i]=='-' || s1[i]=='*' || s1[i]=='/')
		{
			c.push_back(s1[i]);
		}
  }
  
  
int i=0,j=0;

if(c[j]=='+')    // write this for all symbols
{
	s= v[i]+v[i+1];
	
	i=i+2; j++;
}

	else if(c[j]=='-')
	{
		s= v[i]-v[i+1];
    	i=i+2; j++;
	}
		else if(c[j]=='*')
	{
	   s= v[i]*v[i+1];
	   
	   i=i+2; j++;
	}
	else	if(c[j]=='/')
	{
     	s= v[i]/v[i+1];
	   i=i+2; j++;
	}

// now j will be at 1 and i will be at 2

while(i<v.size() && j<c.size())
{
	
	if(c[j]=='+')
	{
		s=s+v[i];
		
       j++;i++;
	}
	else	if(c[j]=='-')
	{
		s=s-v[i];
		
       j++;i++;
	}
		else if(c[j]=='*')
	{
		s=s*v[i];
	
       j++;i++;
	}
		else if(c[j]=='/')
	{
		s=s/v[i];
		
       j++;i++;
	}
	
}
cout<<s<<endl;

}
