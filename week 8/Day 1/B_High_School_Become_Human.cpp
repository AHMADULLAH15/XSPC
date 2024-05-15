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

    ll x,y;cin>>x>>y;

    if(x == y) cout<<"="<<endl;
    else
    {
        double logX = log(x);
        double logY = log(y);
        if (y * logX > x * logY) cout << ">" << endl;
        else if (y * logX < x * logY) cout << "<" << endl;
        else cout << "=" << endl;
    }

    return 0;
}