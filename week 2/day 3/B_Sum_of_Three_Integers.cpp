#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s,ans = 0;
    cin>>k>>s;

    for (int i = 0; i <=k; i++)
    {
        for (int j = 0; j <=k; j++)
        {
            int a = s-i-j;
            if(a>=0 && a<=k) ans++;
        }
        
    }
    cout<<ans;
    return 0;
}