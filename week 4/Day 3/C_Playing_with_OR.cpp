#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        loop(i,0,n) cin>>arr[i];
        ll odd = 0,ans = 0;
        loop(i,0,k) if(arr[i] % 2 != 0) odd++;

        if(odd > 0) ans++;
        loop(i,k,n)
        {
            if(arr[i - k] % 2 != 0) odd--;
            if(arr[i] % 2 != 0) odd++;
            if(odd > 0) ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}