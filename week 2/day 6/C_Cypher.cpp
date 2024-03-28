#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            string s;
            cin>>s;
            // for (int i = 0; i < x; i++)
            // {
            //     cin>>s[i];
            // }
            
            // cout<<s<<endl;
            for(char c : s)
            {
                cnt++;
                if(c == 'U')
                {
                    // if(arr[i] == 9)
                    // {
                    //     arr[i] = 0;
                    // }
                    if(arr[i] == 0)
                    {
                        arr[i] = 9;
                    }
                    else
                    {
                        arr[i]--;
                    }
                }
                if(c == 'D')
                {
                    if(arr[i] == 9)
                    {
                        arr[i] = 0;
                    }
                    else
                    {
                        arr[i]++;
                    }
                }
            }
        }
            for(int i = 0; i< n; i++) 
            cout<<arr[i]<<" ";
            cout<<endl;
        
    }
    return 0;
}