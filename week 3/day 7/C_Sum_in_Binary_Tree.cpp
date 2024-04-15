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
        ll n;cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        ll c = n;
        ll sum = 0;
        while (true)
        {
            sum += n/2;
            n = n/2;
            if(n  == 1) break;
        }
        
        cout<<sum+c<<endl;
    }
    

    return 0;
}