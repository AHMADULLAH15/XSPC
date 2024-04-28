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

    ll t;cin>>t;
    while (t--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;

        ll aa = min(a,s/n);ll bb = s - aa * n; ll totalb = min(b,bb);

        ((aa * n + totalb) >= s) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    

    return 0;
}