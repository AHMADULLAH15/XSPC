#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
void solve()
{
    string s;cin>>s;
    int cnt = 0;

    map<char,int>  mp;
    set<char> st;

    for(auto c : s)
    {
        mp[c]++;
        st.insert(c);
    }

    for(auto c : st)
    {
        if(mp[c] >= 2) cnt++;
    }

    (1 < cnt)? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
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
        solve();
    }
    

    return 0;
}