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

    ll n,k;cin>>n>>k;
    vector<ll> v;
    // cout<<n%1;
    for (int i = 1; i <=sqrt(n); i++)
    {
        if(n % i == 0)
        {
            v.push_back(i);
            if(i != (n / i))
            {
                v.push_back( n / i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size() >= k) cout<<v[k-1]<<endl;
    else cout<<-1<<endl;

    return 0;
}