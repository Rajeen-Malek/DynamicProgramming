#include<bits/stdc++.h>
using namespace std;
unordered_map <int , bool> ma;
bool cansum(int target , int numbers[],int n ,unordered_map<int , bool > ma )
{
    
    if(ma[target]==true) return true;
    if(target==0) return true;
    if(target<0) return false;

    for(int i=0 ; i < n ; i++)
    {
        int rem = target - numbers[i];
        if(cansum(rem , numbers,n , ma)==true)
        { 
            ma[target] = true;
            return true;
        }
    }
    ma[target] = false;
    return false;
}

int main()
{
    int a[]={7,14} ;
    cout<<cansum(14,a,2,ma);
}