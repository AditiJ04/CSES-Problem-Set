#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int mx=0;
    
    int len=s.size();
    
    int i=0,j=0;
    
    while(i<len)
    {
        if(s[i]==s[j])
        {
            mx=max(mx,j-i+1);
            j++;
        }
        else
        {
            i++;
        }
    }
    cout<<mx;
    

    return 0;
}