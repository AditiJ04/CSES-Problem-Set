#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n==1)
    {
        cout<<n;
        return 0;
    }

    if(n==4)
    {
        cout<<n-2<<" "<<n<<" "<<n-3<<" "<<n-1;
        return 0;
    }
    
    if(n<=3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    
    for(int i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    
    for(int i=n;i>=1;i--)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}