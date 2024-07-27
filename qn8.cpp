#include<iostream>
#include<bits/stdc++.h>
#define ll long long int 

using namespace std;
int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
    ll y,x;
    cin>>y;
    cin>>x;
    
    ll A[5][5];
    
    for(ll i=0;i<5;i++)
    {
        for(ll j=0;j<5;j++)
        {
            cin>>A[i][j];
        }
    }
    
    cout<<A[y-1][x-1]<<endl;
    }
    return 0;
}