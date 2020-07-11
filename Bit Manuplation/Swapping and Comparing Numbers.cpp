
// Swap elements using xor, pointer and arthmatic operations and checking if equal.

#include<stdio.h>

void BitEqual(int a,int b)
{
	if(a^b)
	printf("Not Equal Numbers");
	else
	printf(" Equal Numbers");
}
void swapXor(int a, int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("elements after swap using xor: %d %d\n",a,b);
}
void swapArthematic(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("elements after swap using Arthematic Operations: %d %d\n",a,b);
}
void swappointer(int *a,int *b)
{
	int t;
	 t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("elements before swap : %d %d\n",a,b);
	swapXor(a,b);
	swapArthematic(a,b);
	swappointer(&a,&b);
	printf("elements after swap using pointers in main function : %d %d\n",a,b);
    BitEqual(a,b);

}
