#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    for(int i = 0; i*a <= c; i++)
    {
        int test = c -  (i * a);
        if((test % b) == 0) flag = true;
    }
    (flag)? cout<<"Yes"<<endl : cout<<"No"<<endl;
    return 0;
}