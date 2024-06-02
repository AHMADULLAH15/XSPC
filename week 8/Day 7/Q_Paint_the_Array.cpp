#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
bool Is_Prime(int n)
{
    if(n<2 )return false;

    if(n<=3 )return true;

    if(n%2==0 )return false;

    for(int i=3; i*i<=n; i+=2)
    {
        if(n % i==0 )return false;
    }
    return true;
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;cin>>t;

    while(t--)
    {
        ll n;

        cin>>n;
        ll arr[n+4],gcd= 0, gcd1= 0;
        
        loop(i,0,n)cin>>arr[i];

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                gcd=__gcd(gcd,arr[i]);
            }
            else
            {
                gcd1=__gcd(gcd1,arr[i]);
            }
        }

        int a= 0,b= 0;

        for(int i=1; i<n; i+=2)
        {
            if(arr[i]%gcd == 0)
            {
                a= 1;
                break;
            }
        }


        for(int i=0; i< n; i+=2)
        {
            if(arr[i]%gcd1 == 0)
            {
                b=1;
                break;
            }
        }

        if(a== 1 && b == 1) cout<<0<<endl;
        else if( a == 0) cout<<gcd<<endl;
        else cout<<gcd1<<endl;
    }

    return 0;
}