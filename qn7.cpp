#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<map>

using namespace std;

int main()
{
    ll n;
    cin>>n;
    
    int cnt=0;
    ll A[n];
    
    map<int,int>mp;
    
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    for(int i=0;i<n;i++)
    {
        mp[A[i]]++;
    }
    
    for(auto c:mp)
    {
        cnt++;
    }
    
    cout<<cnt;
    return 0;
}