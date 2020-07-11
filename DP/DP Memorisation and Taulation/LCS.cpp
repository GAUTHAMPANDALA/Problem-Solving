						// PROGRAM TO FING LONGEST PALINDROMIC SUBSTRING //
				// Link:  https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/  //	
						
#include<stdio.h> 
#include<string.h> 

int max(int a, int b)
{
    if(a>b)
	 return a;
	 else
	 return b;
}


int lcs(char *X, char *Y,int m,int n){
	
    int L[m+1][n+1];    								   //Memorisation matrix.
    int i,j;       
for (i=0;i<=m;i++) 
    { 
        for (j=0; j<=n; j++) 
        { 
            if (i == 0 || j == 0)      					  //making first row and column of matrix zero.
            L[i][j] = 0;  
      
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  			 // if eleemnts equal increment the diagnol as previous diagnol+1
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);    //max of eleemnts.
        } 
    } 
  
    return L[m][n]+1;
}


int main()
{
 char s[100],s2[100];
 gets(s); 
 gets(s2);
 int a;
 int n,m;
 n=strlen(s);
 m=strlen(s2);
 a=lcs(s,s2,m,n);
 printf("%d ",a);
}

