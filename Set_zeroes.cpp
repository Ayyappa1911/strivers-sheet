// Question

// Given an NxM integer matrix. if an element is zero we should make its entire row and column as zero.

// input matrix
// [ 7 , 19 , 3 ]
// [ 4 , 21,  0 ]

//Output Matrix
//[ 7, 19, 0]
//[ 0,  0, 0]


//input Matrix // Multiple Zeroes case.
// [ 1, 2, 0]
// [ 4, 0, 6]
// [ 7, 8, 9]

// output Matrix
// [0 , 0 , 0]
// [0 , 0 , 0]
// [7 , 0 , 0]


#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    
    int b = (matrix.begin())->size();
    int a = matrix.size();
    
        //There could be multiple zeroes in the given matrix. so we need to find out what all the rows and columns need to be zero.
    vector<bool> col(b);
    vector<bool> row(a);
    
    int i,j = 0;
    

    // we findout the rows and columns by iterating the matrix completely. It may not be the best way. Complexity O(N^2)
    for(i = 0; i < a ; i++)
    {
        for(j = 0; j< b ; j++)
        {
            if(matrix[i][j] == 0)
            {
                col[j] = true;
                row[i] = true;
            }
        }
    }
    
    //If any row with the given index or any column with the given index is zero we make it complete zero.
    for(i = 0; i < a ; i++)
    {
        for(j = 0; j< b ; j++)
        {
            if(col[j] || row[i])
            {
                matrix[i][j] = 0;
            }
        }
    }
    

    

}
