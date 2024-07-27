#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    
    int A[n];
    
    for(int i=1;i<=n;i++)
    {
        A[i-1]=i;
    }
    
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
    }
    
    if(sum%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}