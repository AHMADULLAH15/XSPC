#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x,y;
    cin>>x>>y;

    ll cnt = 0;
    while(true)
    {
        if(x >y)
        {

            break;
        }
        else
        {
            x*=2;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}