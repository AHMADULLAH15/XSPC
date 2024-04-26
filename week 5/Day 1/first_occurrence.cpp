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

    int n,key;cin>>n>>key;
    vector<int>v(n);
    loop(i,0,n) cin>>v[i];

    int l = 0,r = n -1,mid,idx = -1;
    while(l <=r)
    {
        mid = (l +r) /2;
        if(key == v[mid])
        {
            idx = mid;
            r = mid -1;
        }
        else if(key < v[mid])
        {
            r = mid -1;
        }
        else 
        {
            l = mid + 1;
        }
    }

    if(idx != -1) cout<<"Element found"<<" : "<< idx<<endl;
    else cout<<"Element not found"<<endl;

    return 0;
}