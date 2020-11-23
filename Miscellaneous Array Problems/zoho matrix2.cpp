#include<bits/stdc++.h> 
  
using namespace std;

bool isupper(int a[][4],int r,int c)
{
	  for(int i=1;i<r;i++)
	  {
	  	  for(int j=0;j<i;j++)
	  	  {
	  	  	  if(a[i][j]!=0)
	  	  	  {
	  	  	  	  return false;
			  }
			}
	  }
	return true;
}


bool islower(int a[][4],int r,int c)
{
	  for(int i=0;i<r;i++)
	  {
	  	  for(int j=i+1;j<c;j++)
	  	  {
	  	  	  if(a[i][j]!=0)
	  	  	  {
	  	  	  	  return false;
			  }
			}
	  }
	return true;
}


int main() 
{ 
    int matrix[4][4] = {{4,6,1,4},  
                        {0,3,5,9},
						{0,0,6,2},  
                        {0,0,0,8}}; 
    int row = 4, col = 4; 
      
    
    if(islower(matrix, row, col))
	  cout<<"Lower Triangular Matrix: \n"; 
      
     else if(isupper(matrix, row, col))
	  cout<<"Upper Triangular Matrix: \n";
	  
	  else
	  {
	  	cout<<"not traaingular matrix: \n";
	  	
	  }
          
    return 0; 
} 
