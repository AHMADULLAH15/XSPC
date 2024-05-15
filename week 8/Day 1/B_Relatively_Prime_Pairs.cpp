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

    ll l,r;cin>>l>>r;
    cout<<"YES"<<endl;
    
    for (ll i = l; i <= r; i+=2)
    {
        cout<<i<<" "<<i + 1<<endl;
    }
    

    return 0;
}