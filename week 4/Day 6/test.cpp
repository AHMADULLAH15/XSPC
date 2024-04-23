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

    int n;cin>>n;
    int a = 1,b = 1;
    while (true)
    {
        if(a*b == n) break;
        b++;
        if(b == 11)
        {
            a++;
            b = 1;
        }
    }
    
    cout<<a<<" "<<b;
    return 0;
}