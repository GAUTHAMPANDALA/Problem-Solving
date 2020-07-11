
    ///   Min XOR of elements in array 
    
#include<stdio.h>
#include<math.h>

void sort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}

int minn(int a,int b){
	
	if(a>b)
	return b;
	else
	return a;
	
}
void minxor(int a[],int n)
{
	
	sort(a,n);									// Sort array ascending order
	int minum= a[0]^a[1];
	
	for(int i=1;i<n;i++)						// Result is minimum of sorted a[i] and a[i+1].
	{
		minum=minn(minum,(a[i]^a[i+1]));
	}
	
	printf("The minimum Xor in array is %d",minum);
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
	
	minxor(a,n);
}
