#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,ans=0,mx=0;
    cin>>n;
    while (n--)
    {
        ll val;
        cin>>val;
        ans+=val;
        if(ans % 2 == 0)
        {
            mx = max(ans,mx);
        }
    }
    cout<<mx;
    return 0;
}