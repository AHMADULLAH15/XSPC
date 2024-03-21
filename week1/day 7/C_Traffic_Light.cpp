#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,dis=0;
        char c;
        string s;
        cin>>n>>c>>s;
        s+=s;

        if(c == 'g')
        {
            cout<<0<<endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if(s[i] == c)
            {
                for (int j = i+1; j < n*2; j++)
                {
                    if(s[j] == 'g')
                    {
                        dis = max(j-i,dis);
                        i = j;
                        break;
                    }
                }
                
            }
        }
        cout<<dis<<endl;
    }
    
    return 0;
}