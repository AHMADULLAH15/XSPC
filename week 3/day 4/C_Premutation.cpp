#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr[n][n-1];
        loop(i, 0, n)
        {
            loop(j,0,n-1)
            {
                cin>>arr[i][j];
            }
        }
        map<ll,ll>mp;
        loop(i,0,n) mp[arr[i][0]]++;
        ll a=0,b=0;

        for(auto m : mp)
        {
            if(m.second > a)
            {
                b = m.first;
                a = m.second;
            }
        }

        loop(i,0,n)
        {
            if(arr[i][0] != b)
            {
                cout<<b<<" ";
                loop(j,0,n-1)
                {
                    cout<<arr[i][j]<<" ";
                }
            }
        }
        cout<<endl;
    }
    

    return 0;
}