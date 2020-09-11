				// Given two strings s and t, determine if they are isomorphic.
		// Two strings are isomorphic if the characters in s can be replaced to get t. //
			// Eg: s1='aab' and s2='xxy' => then they are isotrophic.	  //
			//	   s2='aab' and s2='xyz' => Then they are not isotrophic. //

// Algorithm 
// This problem is done using hashing. we hash strings a1,s2.
// now for each hash in s1 , check with s2 such that hash s1 and hash s2 are not zero
//  if equal make the visitedd hash s2 as zero.
//  if any of hash 1 is not matched with hash2 return zero.
			
#include<bits/stdc++.h> 
using namespace std; 
#define MAX_CHARS 256 


 bool isIsomorphic(string s1, string s2) {
      
      int n1,n2;
      int flag;
      n1=s1.length();
      n2=s2.length();
    if(n1!=n2)
    return false;
    else
    {
    	int a[26]={0},b[26]={0};
    	
    	for(int i=0,j=0;i<n1 && j<n2;i++,j++)
    	{
    		a[s1[i]-'a']++;
    		b[s2[i]-'a']++;
		}
	   /*	for(int i=0;i<26;i++)
		{
			cout<<a[i]<<" "<<b[i]<<endl;
		}*/
		for(int i=0;i<26;i++)
		{
			  	
		     if(a[i]!=0)
		     {
		     	flag=0;
		     	for(int j=0;j<26;j++)
		     	{
		     		if(b[j]!=0)
		     		{
		     			if(a[i]==b[j])
		     			{
		     				//cout<<endl<<a[i]<<" "<<b[j]<<"i and j is"<<i<<" "<<j<<" ";
						     flag=1;
						     b[j]=0;
						     break;
						}
					 }
				 }
				 
				 if(flag==0)
				 {
				 	//cout<<"No";
				 	return false;
				 }
			 }
		}
	
	}

  	return true;
  
}
    
int main()
{
	int t;
	cin>>t;
	while(t--){
	
	string s1,s2;
	cin>>s1>>s2;
	if(isIsomorphic(s1,s2))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
}
