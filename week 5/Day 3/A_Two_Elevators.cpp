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
        ll a,b,c;cin>>a>>b>>c;

        ll sub1 = abs(a - 1);
        ll sub2 = abs(b - c) + abs(c - 1);

        if(sub1 < sub2) cout<<1<<endl;
        else if(sub2 < sub1) cout<<2<<endl;
        else cout<<3<<endl;
    }
    

    return 0;
}