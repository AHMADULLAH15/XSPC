#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;

    for (int i = a; i <=b; i++)
    {
        if(i%c==0)
        {
            ans = i;
            break;
        }
    }
    if(ans != 0) cout<<ans;
    else cout<<-1;
    return 0;
}