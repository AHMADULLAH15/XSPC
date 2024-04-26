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

    ll n,k;cin>>n>>k;
    vector<int> v(n);
    loop(i,0,n) cin>>v[i];

    while (k--)
    {
    int key;cin>>key;
    ll l = 0, r = n-1,mid,idx = -1;
    bool flag = false;
    while (l <=r)
    {
        mid = (l + r) / 2;
        if(v[mid] == key)
        {
            flag = true;
            // continue;
            break;
        }
        else if(key < v[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
    

    return 0;
}