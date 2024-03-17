#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;

    int machine_running = (t+0.5) / a;
    int total_biscuits = machine_running * b;
    cout<<total_biscuits;
    return 0;
}