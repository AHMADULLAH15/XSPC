#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a,ll b)
{
    return((a/gcd(a,b)) * b);
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a,b,p,q,ans = 0 ,overlap;
    cin>>n>>a>>b>>p>>q;

    ans +=((n/a)*p);
    ans +=((n/b)*q);
    overlap = (n/lcm(a,b));
    ans -= (overlap*(p+q));
    ans +=(overlap*max(p,q));

    cout<<ans<<endl;

    return 0;
}