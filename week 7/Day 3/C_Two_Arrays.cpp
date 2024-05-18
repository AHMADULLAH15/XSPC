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
        vector<int> vec(n),v(n);
        loop(i,0,n) cin>>vec[i];
        loop(i,0,n) cin>>v[i];
        sort(v.begin(),v.end());
        sort(vec.begin(),vec.end());

        bool ans = true;

        loop(i,0,n)
        {
            int have = v[i] - vec[i];
            if (have < 0 || have > 1)
            {
                ans = false;
                break;
            }
        }

        (ans == true) ? cout<<"YES\n" : cout<<"NO\n";

    }
    

    return 0;
}