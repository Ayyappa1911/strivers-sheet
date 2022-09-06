// Question - Given an array with 0's 1's and 2's. Sort this array in O(N).
// https://bit.ly/3tlM60B
// link to yhe question in coding ninjas platform.

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
    // As the no of variables are fixed we can just count the no of each variables.
   int n0 = 0,n1 = 0,n2 = 0;
   for(int i = 0;i< n ; i++)
   {
       if(*(arr+i) == 0) n0 += 1;
       if(*(arr+i) == 1) n1 += 1;
       if(*(arr+i) == 2) n2 += 1;
   }
   
    // We can directly add the no's we know that zero is less than one and one is less thn two.
    // So we add zeros first, one's next and lastly two's.
    for(int i = 0 ; i<= n0-1; i++)
        *(arr+i) = 0;
    for(int i = n0 ; i<= n0+n1-1; i++)
        *(arr+i) = 1;
    for(int i = n1+n0 ; i<= n-1; i++)
        *(arr+i) = 2;
    
}
