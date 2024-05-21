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

    int n;cin>>n;vector<bool> prime(n+1,true);
    for (int i = 2; i*i <=n; i++)
    {
        if (prime[i])
        {
            for (int j = i+i; j <=n; j +=i)
            {
                prime[j] = false;
            }
            
        }
    }
    
    for (int i = 2; i <=n; i++)
    {
        if(prime[i]) cout<<i<<" ";
    }
    

    return 0;
}