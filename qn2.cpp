#include<iostream>
#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll n;
    cin>>n;

    ll arr[n];
    
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    
    ll sum1=0;
    ll sum2=0;
    for(int i=0;i<n-1;i++)
    {
        sum1+=arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        sum2+=i;
    }
    
    int m=sum2-sum1;
    
    cout<<m;
    return 0;
}