#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    string ans = " ";
    for (int i = 0; i < n; i++)
    {
        if(i+2 < n && s[i+2] == '0' && (i+3 >= n || s[i+3] !='0'))
        {
            int number = ((s[i] - '0') * 10) + (s[i+1] - '0');
            char c = 96+number;
            ans.push_back(c);
            i +=2;
        }
        else
        {
            int number = ((s[i] - '0'));
            char c = 96+number;
            ans.push_back(c);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int test = 'o';
    // cout<<test;
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}