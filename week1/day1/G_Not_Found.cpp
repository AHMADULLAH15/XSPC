#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char find(string s)
{
    set<char> c;
    for (char i = 'a'; i <='z'; i++)
    {
        c.insert(i);
    }
    for(char a : s)
    {
        c.erase(a);
    }
    if(c.empty()) return 'n';
    else return *c.begin();
}
int main()
{
    string s;
    cin>>s;
    if(find(s)=='n') cout<<"None";
    else cout<<find(s);
    return 0;
}