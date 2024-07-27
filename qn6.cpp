#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    
    ll a,b;
    
    while(t--)
    {
        cin>>a;
        cin>>b;
        
        while(a!=0 && b!=0)
        {
            if(a>=b)
            {
                a-=2;
                b-=1;
            }
            else
            {
                a-=1;
                b-=2;
            }
        }
        
        if(a==0 && b==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}