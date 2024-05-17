#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
ll lcm(ll a,ll b)
{
    return((a*b) / (__gcd(a,b)));
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll x,ans=0;cin>>x;


    for (ll i = 1; i <= sqrt(x); i++)
    {
        if(x % i == 0 && lcm(i, x/i) == x)
        {
            ans = i;
        }
    }
    
    cout<<ans<<" "<<x/ans<<endl;
    return 0;
}