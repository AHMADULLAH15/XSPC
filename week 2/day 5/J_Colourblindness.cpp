#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t;cin>>t;
    while (t--)
    {
        int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if ((s1[i] == 'G' || s1[i] == 'B') && s2[i] == 'R')
        {
            flag = false;
            break;
        }
        else if((s2[i] == 'G' || s2[i] == 'B') && s1[i] == 'R')
        {
            flag = false;
            break;
        }
    }
    (flag)?cout<<"YES\n":cout<<"NO\n";
    }
    
    return 0;
}