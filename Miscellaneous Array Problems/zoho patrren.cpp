#include<bits/stdc++.h>

using namespace std;


int main()
{
	  int n;
	  cin>>n;
	  int a=1;
	  for(int i=1;i<=n;i++)
	  {
	  	if(i%2==1){
		  for(int j=1;j<=n;j++)
	  	  {
	  	        cout<<a<<" ";a++;	
	  	        
		  }
		  a--;
		  
	    }
		
		
		if(i%2==0){
		  for(int j=n;j>=1;j--)
	  	   {
	  	        cout<<a<<" ";	
	  	        a--;
		   }
		   a++;
		}
		 
		 a=a+n;
		 cout<<"\n";  		
	  }
	  
	return 0;
}

