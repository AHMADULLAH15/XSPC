#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans1,ans2,fans;
    cin>>a>>b;
    int mx = max(a,b);
    ans1 = (mx*2) -1,ans2 = a+b,fans = max(ans1,ans2);
    cout<<fans<<endl;

    return 0;
}