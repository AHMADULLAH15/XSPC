#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
void sul()
{
    ll A,B;
    cin>>A>>B;
    if(B != 1)
    {
        cout<<"YES"<<endl;
        cout<<(A*B)<<" "<<A<<" "<<(B+1LL)*A<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        
        return;
    }
}
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
        sul();
    }
    

    return 0;
}