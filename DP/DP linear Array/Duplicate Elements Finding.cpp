#include<stdio.h>
#include<math.h>
//Logic to print the Duplicate elements using the XOR O(N^2)


void duplicateXor (int a[],int n)
{
	
for (int i = 0; i < n; i++)  
    {  
        for (int j = i+1; j < n; j++)  
        {  
             int res = a[i] ^ a[j];        // x^x= zero and 0^y=y

             if (res == 0)  
             {  
                printf("%d ",a[i]);    
             }  
        }  
    }  
    
	
}
// Logic to print the duplicates O(N) and O(1) Time and Space.
void duplicate(int a[],int n){

	for(int i=0;i<n;i++)
	{
		if(a[abs(a[i])]>=0)
		{
		
			a[abs(a[i])]=-a[abs(a[i])];
		}
		else
		{
			printf("%d ",abs(a[i]));
		}
	}
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
	
	 duplicate(a,n);
	 duplicateXor(a,n);

}






