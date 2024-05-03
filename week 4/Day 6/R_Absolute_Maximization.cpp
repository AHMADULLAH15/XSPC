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
        vector<int> v(n);
        loop(i,0,n) 
            cin >> v[i];
        
        int ans = 0;
        for (int i = 0; i <= 12; i++)
        {
            bool one = false, zero = false;
            for (int j = 0; j < n; j++)
            {
                bitset<13> b(v[j]);
                one |= (b[i] == 1);
                zero |=(b[i] == 0);
            }
            if(one & zero) ans += (1LL << (ll) i);
        }
        
        cout<<ans<<endl;
    }
    

    return 0;
}