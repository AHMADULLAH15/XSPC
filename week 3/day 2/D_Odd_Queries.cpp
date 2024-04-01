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

    ll t;cin>>t;
    while (t--)
    {
        ll n,q;
    cin>>n>>q;
    ll arr[n],prefix[n],sum = 0;
    loop(i,0,n)
    {
        cin>>arr[i];
        sum+=arr[i];
        prefix[i] = arr[i];
        if(i != 0) prefix[i] = arr[i] + prefix[i-1];
    }
    // loop(i,1,n) cout<<prefix[i]<<" ";
    while (q--)
    {
        ll l,r,k;
    cin>>l>>r>>k;
    l--,r--;
    ll prefix_sum = 0;
    if(l == 0) prefix_sum = prefix[r];
    else prefix_sum = prefix[r] - prefix[l-1];
    ll sub = r - l +1;
    ll mul = sub * k;
    ll ans = abs(prefix_sum - mul);
    sum +=ans;
    if(sum % 2 != 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    sum -= ans;
    }
    }
    
    
    return 0;
}