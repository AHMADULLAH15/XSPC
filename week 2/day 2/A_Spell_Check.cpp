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
    string s;
    cin>>s;
    bool flag = true;
    map<char,int> mp;
    if(s.size() == 5)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
            {
                // continue;
                mp[s[i]]++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        
    }
    else
    {
        flag = false;
    }
    // cout<<s;
    for(auto x:mp)
    {
        if(x.second > 1) flag = false;
    }
    (flag)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}