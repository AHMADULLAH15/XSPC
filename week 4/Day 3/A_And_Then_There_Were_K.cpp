#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
void solve()
{
    ll n,ans = 1;cin>>n;
    while (ans  <= n)
    {
        ans *= 2;
    }
    ans/=2;
    ans--;
    cout<<ans<<endl;
    
}
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
        solve();
    }

    return 0;
}