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

    int t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
    vector<ll> a(n),b(n);
    loop(i,0,n) cin>>a[i];
    loop(i,0,n) cin>>b[i];
    
    bool notposs = false;
    ll x = -1,y = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < b[i])
        {
            notposs = true;
            break;
        }

        if(b[i] != 0)
        {
            if(x == -1)
            {
                x = a[i]-b[i];
            }
            else
            {
                if(a[i] - b[i] != x)
                {
                    notposs = true;
                    break;
                }
            }
        }
        else
        {
            y = max(y,a[i]-b[i]);
        }
    }
    
    if(notposs)
    {
        cout<<"NO"<<endl;
        continue;
    }
    (x == -1 || y <= x) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    
    
    return 0;
}