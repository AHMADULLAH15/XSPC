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
    vector<int> v(n);

    loop(i,0,n) cin>>v[i];

    int begin = 0,ans = 0;
    set<int> st;

    loop(i,0,n)
    {
        while (st.count(v[i]))
        {
            st.erase(v[begin]);
            begin++;
        }
        st.insert(v[i]);
        ans = max((int)st.size(), ans);
    }

    cout<<ans;
    return 0;
}