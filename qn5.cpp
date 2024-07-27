#include<iostream>
#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int A[n];
    ll cnt=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    

    for(ll i=1;i<n;i++)
    {
        if(A[i-1]>=A[i])
        {
            cnt+=A[i-1]-A[i];
            A[i]=A[i-1];
        }
        
    }
    
    
    cout<<cnt<<endl;
    return 0;
}