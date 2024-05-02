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
        ll n,c;cin>>n>>c;
        vector<ll> v(n);
        loop(i,0,n)
        {
            cin>>v[i];
            v[i] += i+1;
        }
        sort(v.begin(),v.end());

        ll sum = 0,ans = 0;
        loop(i,0,n)
        {
            if(sum + v[i] > c) break;
            ans++;
            sum+=v[i];
        }

        cout<<ans<<endl;
    }
    

    return 0;
}