#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n],sum=0,mx=0;

    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    
    if(sum % 2 == 0)
    {
        mx = sum;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                if(sum - arr[i] > mx) mx = sum - arr[i];
            }
        // cout<<1<<endl;
        }
        
    }

    cout<<mx;
    return 0;
}