#include<stdio.h>
#include<string.h>


	void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  


void permute(char *a, int l, int r)
{
	 if (l == r) {
	  printf(" The string permuted is: ");
      puts(a);
	  }
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
              swap(a+l, a+i);   // cpp:  swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
             swap(a+l, a+i);  // cpp: swap(a[l], a[i]);  
        }  
    }  
}

int main()
{
	char s[100];
	gets(s);
	permute(s,0,strlen(s)-1);
}
