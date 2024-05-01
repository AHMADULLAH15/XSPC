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
        int n;cin>>n;
    int neg = 0;
    ll mn = LLONG_MAX, sum = 0;
    vector<ll> v(n);loop(i,0,n)
    {
        cin>>v[i];
        if(v[i] < 0) neg++;
        if(abs(v[i]) < mn) mn = abs(v[i]);
        sum += abs(v[i]);

    }

    if(neg % 2 == 1) sum -= mn*2;
    
    cout<<sum<<endl;
    }
    
    return 0;
}