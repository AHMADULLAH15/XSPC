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
        ll arr[n];
        ll ans = 0;
        loop(i,0,n) cin>>arr[i];
        ll f[33] = {0};

        loop(i,0,n)
        {
            ll a = arr[i],x = 0;
            
            while (a > 0)
            {
                a = a/2;
                x++;
            }
            f[x]++;
        }

        loop(i,0,33)
        {
            if(f[i] >=2)
            {
                ans = ans+ (f[i] *(f[i] - 1) / 2);
            }
        }
        
        cout<<ans<<endl;
    }
    

    return 0;
}