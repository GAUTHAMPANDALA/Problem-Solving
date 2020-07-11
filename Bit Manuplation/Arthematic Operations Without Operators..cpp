
    ///   Arthematic operations without operators. => Bit Manuplation, ie &,|,^,<<,>>.
    
#include<stdio.h>
#include<math.h>

void Nthpowerof2()
{
	  int a;
	 printf("Enter the Number: ");
    scanf("%d",&a);
	int exp=0;
	while(a>0)
	{
		a=a/(pow(2,exp));
		exp++;
	}
	printf("7. The Given number is %d power of 2",exp+1);
}

void Div(int a,int b)
{
int temp=0;
a = abs(a);
b = abs(b);
 
while(a>=b){
    a = a - b;
    temp+=1;
}
printf("6. The Division(a/b) is as: %d\n",temp);
}

void BitMul( int a,int b)		// This method is called as Russian Peasant method
{
int res=0;
while(b!=0)
{
    if(b&1){res +=a;}      							 // Add  If second number becomes odd, add the first number to result 
    a =a<<1;										// Double the first number 
    b=b>>1;				  						  // and halve the second number.
}
printf("5. The Muldiplied Number is %d\n",res);
}

void DivideNumberWithPowersof2()
{
	int n;
	 printf("Enter the Number as n to muldiply with 16: ");
    scanf("%d",&n);
    
    int result= n>>4;   						 	// n/8==n>>3, n/2==n>>1, n/4==n>>2 , ie "n / pow(2,m)== n>>m;"
    printf("4. The Division of n/16 is %d \n",result);
}

void MuldiplyNumberWithPowersof2()
{
	 int n;
	 printf("Enter the Number as n to divide with 16: ");
    scanf("%d",&n);
    
    int result= n<<4;    							// n*8==n<<3, n*2==n<<1, n*4==n<<2 , ie "n* pow(2,m)== n<<m;"
    printf("3. The Muldiply of n*16 is %d \n",result);
}

void BitSub(int a,int b)
{
	while(b!=0)  									//Untill no carry left
	{
		int Borrow=(~a)&b;						  // "~,&" gives us borrow positions to shift and this is done by complement.
		a=a^b;										// "^" Gives us the Sum of the bits in X,Y.	
	    b=Borrow<<1;  								//Shifting the Carry a bit, as we add in binary.
		
	}
	printf("2. The Subracted Number is %d\n",a);
}

void BitAdd(int a,int b)
{
	while(b!=0)  										      //Untill no carry left
	{
		int Carry=a&b; 								    	 // "&" gives us carry positions to shift.
		a=a^b;								   				// "^" Gives us the Sum of the bits in X,Y.	
		b=Carry<<1;										  //Shifting the Carry a bit, as we add in binary.
		
	}
	printf("1. The added Number is %d\n",a);
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	BitAdd(a,b); 						 //ADDITION.    ==> Carry,Xor,<<1
	BitSub(a,b); 							//Subraction. ==>  borrow,xor,<<1
	MuldiplyNumberWithPowersof2();	 // Muldiply n with pow(2,m) ==> n<<m
	DivideNumberWithPowersof2();      	 // Divide n with pow(2,m) ==> n>>m
	BitMul(a,b); 						//Muldipication   
    Div(a,b);   					  //Division.
    Nthpowerof2();    				// Determine the power of 2
}
