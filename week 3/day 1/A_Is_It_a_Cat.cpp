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
    string s,ans = "",ans1 = "meow";
    cin>>s;
    
    for (int i = 0; i < n; i++)
    {
        if(toupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        if(ans.empty() || ans.back() !=s[i])
        {
            ans.push_back(s[i]);
        }
    }
    if(ans == ans1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
    return 0;
}