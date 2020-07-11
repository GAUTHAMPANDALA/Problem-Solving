#include<stdio.h>
#include<math.h>

int minDis(int a[],int n,int x,int y)
{
int prev=0,i,min_dist=n;
// Find the first occurence of any of the two numbers (x or y) and store the index of this occurence in prev 
	for (i = 0; i < n; i++) 
    { 
        if (a[i] == x || a[i] == y) 
        { 
        prev = i; 
        break; 
        } 
    } 
    // Traverse after the first occurence 
    
    for(int j=i;j<n;j++)
    {
    	if (a[j] == x || a[j] == y) 
        {
         //  If the current element matches with any of the two then check, if current element and prev element are different
        // Also check this distance(i,prev) is less than minimum distance, because a[i] must not equal to the a[prev elemet]
        	if ( a[prev] != a[j] && (j - prev) < min_dist )  
            { 
                min_dist = j - prev; 
                prev = j; 
            } 
		}
	    else
                prev = j; 
   }
   
   printf("%d",min_dist);
    
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x,y;
	scanf("%d %d",&x,&y);
	minDis(a,n,x,y);
}
