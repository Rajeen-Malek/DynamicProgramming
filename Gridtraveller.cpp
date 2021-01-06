#include<bits/stdc++.h>
using namespace std;
int ma[999][999] ;    //Initialized the global matrix to store the preceding values
int grid ( int n , int m  )
{
    if(n==1 and m==1) return 1;
    if(n==0 || m == 0) return 0;
    if(ma[n][m]!=-1) return ma[n][m];   // checking if the value is present in the matrix
    
    ma[n][m] = (grid (n-1,m) + grid(n,m-1));

    return(ma[n][m]);
}
int main()
{
    for (int i=0 ; i<=3 ; i++)
        for(int j=0 ; j<=3 ; j++)
            ma[i][j] = -1;
    
    cout<<grid(3,3); // output 3
}
