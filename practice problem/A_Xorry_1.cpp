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

    int t;cin>>t;
    while (t--)
    {
        int x;cin>>x;
        int a = 0 ,b = 0 ,bitpossion = 0;

        while ((1 << bitpossion) <= x) bitpossion++;

        int  rem = 1 << (bitpossion - 1);
        a = rem;
        b = a ^  x ;
        cout<<b<<" "<<a<<endl;
        
    }
    

    return 0;
}