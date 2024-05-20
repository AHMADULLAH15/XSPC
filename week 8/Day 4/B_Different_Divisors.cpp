#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
vector<int> v;
void prime(int n)
{
    for (int i = 1; i*i <=n; i++)
    {
        if(n % i == 0)
        {
            v.push_back(i);
        }
    }
    
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int d;cin>>d;
    

    return 0;
}