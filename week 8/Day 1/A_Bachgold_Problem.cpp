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

    int n;cin>>n;
    vector<int> v;
    int ans = -1;

    if(n % 2 != 0)
    {
        ans = n /2;
        for (int i = 0; i < ans - 1; i++)
        {
            v.push_back(2);
        }
        v.push_back(3);
    }
    else
    {
        ans = n / 2;
        for (int i = 0; i < ans; i++)
        {
            v.push_back(2);
        }
        
    }
    cout<<ans<<endl;
    for(auto x : v) cout<<x<<" ";
    cout<<endl;

    return 0;
}