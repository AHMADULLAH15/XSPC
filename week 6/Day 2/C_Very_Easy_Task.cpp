#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
bool check(int t,int n,int x,int y)
{
    if(t < min(x,y)) return false;

    int cnt = 1;

    t -= min(x,y);
    cnt += t/x + t/y;
    return cnt >=n;
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,x,y;cin>>n>>x>>y;

    int l = 1, r= max(x,y)*n ,mid;

    while (l < r)
    {
        mid = l + (r-l) / 2;
        if (check(mid,n,x,y))
            r = mid;
        else
            l = mid+1;
    }
    cout<<r;

    return 0;
}