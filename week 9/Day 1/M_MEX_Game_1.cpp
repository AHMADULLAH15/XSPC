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
        ll n,cnt = 0;
        cin >> n;
        vector<ll> v(n + 1, 0);
        
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            v[val]++;
        }


        for (int i = 0; i <= n; i++)
        {
            cnt += (v[i] == 1);
            if ((cnt == 2) || v[i] == 0)
            {
                cout << i <<endl;
                break;
            }
        }
    }
    

    return 0;
}