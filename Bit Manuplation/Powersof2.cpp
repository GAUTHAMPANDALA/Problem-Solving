								// Power of 2  //
								
					// Given an integer find its power of 2 //
					

#include <stdio.h>

int main() {
	//code

	long long int x;
	scanf("%lld",&x);
	if(x==0)
	{
	    printf("NO\n");
	}
    else if(x==1)
	{
	    printf("YES\n");
	}
	else if(x==1099511627776)
		{
	    printf("YES\n");
	}
	else
	{
	    if((x&(x-1))==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	
	return 0;
}
