
// Question

// You are given an integer N. Your task is to return  A 2-D list containing the pascal's triangle till the row N.

// input
// 3

//output 
// [ 1 ]
// [ 1  1]
// [ 1  2  1]


#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> pt;
    
    // Loop for each creating each row and pushing it back to pascals triangle
    for(int i = 0;i < n;i++)
    {
        // first row case
        if(i == 0)
        {
           pt.push_back({1}); 
        }
        else{
            
        vector<long long int> tmp;
        
        for(int j = 0;j <=i;j++)
        {
            // First element and the last element of each row is always zero.
            if(j == 0)
            {
                tmp.push_back(1);
            }
            else if(j == i)
            {
                tmp.push_back(1);
            }
            else // For inbetween values its the sum of values in previous row with element with same index and an element in prev row with index -1.
            {
                tmp.push_back(pt[i-1][j-1] + pt[i-1][j]);
            }
        }
        pt.push_back(tmp);
            
        }
    }
    
    return pt;
    
}
