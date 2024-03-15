#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans;
    cin>>a>>b;
    ans = max(a,b);

    if(a == ans) cout<<0<<endl;
    else cout<<(b-a) + 1<<endl;
    return 0;
}