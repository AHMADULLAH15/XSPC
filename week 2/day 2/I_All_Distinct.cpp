#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        auto it = unique(v.begin(),v.end());
        v.erase(it,v.end());
        // for(auto a : v) cout<<a<<" ";
        if((n - v.size()) % 2 == 1) cout<<v.size()-1<<endl;
        else cout<<v.size()<<endl;
    }
    
    return 0;
}