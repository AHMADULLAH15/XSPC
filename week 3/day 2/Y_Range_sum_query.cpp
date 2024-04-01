#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(ll i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,t;
    cin>>n>>t;
    ll arr[n],prefix[n];
    loop(i,0,n)
    {
        cin>>arr[i];
    }
    prefix[0] = arr[0];
    loop(i,1,n) prefix[i] = arr[i] + prefix[i-1];
    // loop(i,0,n) cout<<prefix[i]<<" ";
    // ll l,r;
    // cin>>l>>r;
    // l--,r--;
    // if(l == 0) cout<<prefix[r];
    // else cout<<prefix[r] - prefix[l-1];
    while (t--)
    {
        ll l,r;
    cin>>l>>r;
    l--,r--;
    if(l == 0) cout<<prefix[r]<<endl;
    else cout<<prefix[r] -  prefix[l-1]<<endl;
    }
    
    

    return 0;
}