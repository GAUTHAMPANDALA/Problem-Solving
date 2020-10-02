		// Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) //
					//   then make all the cells of ith row and jth column as 1. //

// Algorithm
// Iterate the matrix and  scan  First row and Column if 1 found make the two boolean variables as 1.
// and for remaing rows if 1 found then, m[i][1]=1 and m[0][j]=1,we do this because to know at which row,col we should change.
// Modify the input matrix mat[] using the first row and first column of Matrix mat 
// Modify the First row and column based on the boolean variables.


#include <bits/stdc++.h> 
using namespace std; 
#define R 3 
#define C 4 
  
void modifyMatrix(int mat[R][C]) 
{ 
    // variables to check if there are any 1  in first row and column 
    bool row_flag = false; 
    bool col_flag = false; 
  
  
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            if (i == 0 && mat[i][j] == 1)   // updating the first row  if 1  is encountered 
                row_flag = true; 
  
            if (j == 0 && mat[i][j] == 1)   // updating the first col if 1  is encountered 
                col_flag = true; 
  
            if (mat[i][j] == 1) { 			// make entry in first row and column of matrix if m[i][j] is 1.
  								
                mat[0][j] = 1; 			// We do this to know at which row and at which column  is 1
                mat[i][0] = 1; 			// so that we can modify the all row and columns as 1.
            } 
        } 
    } 
  
    // Modify the input matrix mat[] using the  first row and first column of Matrix mat 
    for (int i = 1; i < R; i++) { 
        for (int j = 1; j < C; j++) { 
  
            if (mat[0][j] == 1 || mat[i][0] == 1) { 
                mat[i][j] = 1; 
            } 
        } 
    } 
  
    // modify first row if there was any 1 
    if (row_flag == true) { 
        for (int i = 0; i < C; i++) { 
            mat[0][i] = 1; 
        } 
    } 
  
    // modify first col if there was any 1 
    if (col_flag == true) { 
        for (int i = 0; i < R; i++) { 
            mat[i][0] = 1; 
        } 
    } 
} 
  
/* A utility function to print a 2D matrix */
void printMatrix(int mat[R][C]) 
{ 
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            cout << mat[i][j]; 
        } 
        cout << "\n"; 
    } 
} 
  
// Driver function to test the above function 
int main() 
{ 
  
    int mat[R][C] = { { 1, 0, 0, 1 }, 
                      { 0, 0, 1, 0 }, 
                      { 0, 0, 0, 0 } }; 
  
    cout << "Input Matrix :\n"; 
    printMatrix(mat); 
  
    modifyMatrix(mat); 
  
    cout << "Matrix After Modification :\n"; 
    printMatrix(mat); 
    return 0; 
} 
