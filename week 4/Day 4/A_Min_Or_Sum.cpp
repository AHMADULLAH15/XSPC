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
        int n;cin>>n;
        int arr[n];loop(i,0,n)  cin >> arr[i]; ll sum = 0;loop(i,0,n) sum |= arr[i];cout<<sum<<endl;
    }
    

    return 0;
}