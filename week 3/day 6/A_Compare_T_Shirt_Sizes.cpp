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
    while(t--)
    {
        // int n;cin>>n;
    string a,b;
    cin>>a>>b;
    char x,y;
    int cnt1=0,cnt2=0;
    // cout<<a<<" "<<b;
    for(auto c : a)
    {
        if(c == 'X')
        {
            cnt1++;
        }
        else
        {
            x=c;
        }
    }
    for(auto c : b)
    {
        if(c == 'X')
        {
            cnt2++;
        }
        else
        {
            y=c;
        }
    }

    if(x == y)
    {
        if(cnt1 == cnt2 || x == 'M')
        {
            cout<<'='<<endl;
            continue;
        }
            if(x == 'S')
        {
            if(cnt1>cnt2)cout<<'<'<<endl;
            else cout<<'>'<<endl;
        }
        else if(x == 'L')
        {
            if(cnt1>cnt2) cout<<'>'<<endl;
            else cout<<'<'<<endl;
        }
        continue;
    }

    if(x == 'S')
    {
        cout<<'<'<<endl;
    }
    else if(x == 'M' && y == 'S')
    {
        cout<<'>'<<endl;
    }
    else if(x == 'M' && y == 'L')
    {
        cout<<'<'<<endl;
    }
    else if(x== 'L')
    {
        cout<<'>'<<endl;
    }

    }

    return 0;
}