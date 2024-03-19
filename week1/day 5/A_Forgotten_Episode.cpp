#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],freq[n] = {0};

    for (int i = 1; i <=n-1; i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    // sort(arr,arr+n);
    // int ans = 0;
    for (int i = 1; i <=n-1; i++)
    {
        // if(arr[i] != i)
        // {
        //     // cout<<i;
        //     ans = i;
        //     // break;
        // }
        // cout<<arr[i]<<" ";
        // cout<<freq[i]<<" ";
        if(freq[i] == 0)
        {
            cout<<i;
        }
    }
    // cout<<ans;

    return 0;
}