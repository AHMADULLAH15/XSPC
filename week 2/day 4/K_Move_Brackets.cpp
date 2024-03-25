#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;
    cin>>n;
    string s;
    cin>>s;
    int open = 0,move = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '(') open++;
        if(s[i] == ')' && open) open--;
    }
    cout<<open<<endl;
    }
    
    return 0;
}