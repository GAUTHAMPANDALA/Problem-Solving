
      					// PROGRAM TO FING LONGEST PALINDROMIC SUBSTRING //
			// LINK : https://www.geeksforgeeks.org/longest-palindromic-subsequence-dp-12//

#include<stdio.h> 
#include<string.h> 

int max(int a, int b)
{
    if(a>b)
	 return a;
	 else
	 return b;
}
int lps(char *str){
	int n=strlen(str);
    int L[n][n];    								  //Memorisation matrix.
    int i,j,cl;    
for(int i=0;i<n;i++)
   L[i][i]=1;    
   


for (cl=2; cl<=n; cl++) 
    { 
        for (i=0; i<n-cl+1; i++) 
        { 
            j = i+cl-1;   				   			     // assiging must start from the upper traingular matrix.
            if (str[i] == str[j] && cl == 2) 
               L[i][j] = 2; 							// first and last element equal case. making it as zero.
            else if (str[i] == str[j]) 
               L[i][j] = L[i+1][j-1] + 2; 				// lower diagnol element + 2 
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);    // lower diagnol elements maximum 
        } 
    } 
  
    return L[0][n-1];
}

int main()
{
  char s[100];
gets(s); 
 int a;
 int n;
 n=strlen(s);
 a=lps(s);
 printf("%d ",a);
}

