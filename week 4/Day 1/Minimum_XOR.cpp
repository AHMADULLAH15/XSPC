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
        int n,XOR=0;
        cin >> n;vector<int> v(n);
        loop(i,0,n)
        {
            cin>>v[i];
            XOR ^= v[i];
        }

        int ans = XOR;
        loop(i,0,n) ans = min(ans, (XOR ^ v[i]));

        cout<<ans<<endl;
    }
    

    return 0;
}