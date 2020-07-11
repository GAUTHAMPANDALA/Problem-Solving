#include<iostream>
using namespace std;



void findmaxvowelsubstring(string s, int k)   // Time O(N)
{
	int i,j;
	int c=0,maxx=0;
	int n=s.length();
	int s1=0,e=k;
	for( i=0;i<k;i++)						// K times
	{
		if(s[i]=='a'|| s[i]=='e' || s[i]=='i'|| s[i]=='o'||s[i]=='u' )
		{
			c++;
		}
	}
     if(maxx<c)
     {
     	maxx=c; 
	 }
     for(i=1,j=1;j+k-1<n;j++,i++)				// n-k times.
	{
		if(s[i-1]=='a'|| s[i-1]=='e' || s[i-1]=='i'|| s[i-1]=='o'||s[i-1]=='u')
		{
			c--;
		}
		
		if(s[j+k-1]=='a'|| s[j+k-1]=='e' || s[j+k-1]=='i'|| s[j+k-1]=='o'||s[j+k-1]=='u')
		{
			c++;
		}
		
		if(maxx<c)
		{
			maxx=c; s1=i;e=j+k-1; printf("csadfasf %c %c\n",s[s1],s[e]);
		}
	}
	
	printf("%d %d %d\n",maxx,s1,e);				// TOTAL O(N-K+K)=O(N).
	for(int i=s1;i<=e;i++)
	{
		printf("%c",s[i]);
	}

}   
int main()
{
	
	int k;
	cin>>k;
	
	string s;
	cin>>s;
	
	findmaxvowelsubstring(s,k);	
}
