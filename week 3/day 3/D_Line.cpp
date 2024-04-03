#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
#define loopr(i,s,n) for(int i = s; i < n; i--)
using namespace std;
int main()
{
    //Author : AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n;
    cin>>n;
    vector<ll> v,baki,farray(n+1);
    string s;
    cin>>s;
    ll sum = 0,cnt=0;
    for (int i = 0; i < n; i++)
    {
        ll l = i,r = n-i-1;
        if(s[i] == 'L')
        {
            if(r>l)
            {
                sum+=r;
                cnt++;
                baki.push_back(r-l);
            }
            else
            {
                sum+=l;
            }
        }
        else
        {
            if(l>r)
            {
                cnt++;
                sum+=l;
                baki.push_back(l-r);
            }
            else
            {
                sum+=r;
            }
        }
    }

    for (int i = cnt; i<=n; i++)
    {
        farray[i]=sum;
    }
    
    sort(baki.begin( ),baki.end(),greater<ll>());

    for (int i = cnt-1; i>=1; i--)
    {
        sum -= baki.back();
        baki.pop_back();
        farray[i] = sum;
    }

    for (int i = 1; i <=n; i++)
    {
        cout<<farray[i]<<" ";
    }
    cout<<endl;
    }
    
    return 0;
}