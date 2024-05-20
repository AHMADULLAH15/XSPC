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

    // int t;cin>>t;
    // while (t--)
    // {
        ll a,b;cin>>a>>b;
    vector<ll> divisor;
    for (ll i = 1; i * i <= b; i++)
    {
        if(b % i == 0 )
        {
            divisor.push_back(i);
            if((b/i) != i) divisor.push_back(b/i);
        }
        
    }
    // sort(divisor.begin(),divisor.end());
    // bool ans = true;
    for(auto v : divisor)
    {
        cout<<v<<" ";
        // if(a % v !=0)
        // {
        //     // cout<<"NO"<<endl;
        //     // ans = false;
        // }
    }
    // (ans) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    // }
    
    return 0;
}