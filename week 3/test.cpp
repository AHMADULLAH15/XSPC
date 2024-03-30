#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string remove_dublicate(string s ,int n)
{
    unordered_map<char,int> um;
    string unique_s = "";
    for (int i = 0; i < n; i++)
    {
        if(um.find(s[i]) == um.end())
        {
            unique_s.push_back(s[i]);
            um[s[i]]++;
        }
    }
    return unique_s;
}
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;
    cin>>n;
    string s;
    cin>>s;
    string unique_string = remove_dublicate(s,n);
    // cout<<unique_string;
    string ans;
    bool vis[26]={false};
    for (int i = 0; i < unique_string.length(); i++)
    {
        int index = tolower(unique_string[i]) - 'a';
        if(!vis[index])
        {
            vis[index]=true;
            ans=ans+unique_string[i];
        }
        
    }
    // cout<<ans;
    if(ans.size() < 4)
    {
        cout<<"NO"<<endl;
        continue;
        // return 0;
    }
    bool flag = true;
    // (flag)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    if(ans[0] == 'm' || ans[0]=='M')
    {
        if(ans[1] == 'e' || ans[1] == 'E')
        {
            if(ans[2] == 'o' ||ans[2]=='O')
            {
                if(ans[3] == 'w' ||ans[3]=='W')
                {
                    // cout<<"YES"<<endl;
                    flag = true;
                }
                else
                {
                    // cout<<"NO"<<endl;
                    flag = false;
                }
            }
            else
                {
                    // cout<<"NO"<<endl;
                    flag = false;
                }
        }
        else
                {
                    // cout<<"NO"<<endl;
                    flag = false;
                }
    }
    else
                {
                    // cout<<"NO"<<endl;
                    flag = false;
                }

    // bool flag = true;
    for (int i = 0; i < ans.size(); i++)
    {
        if(ans[i] == 'm'  || ans[i]=='M' || ans[i] == 'e' || ans[i] == 'E' || ans[i] == 'o' || ans[i] == 'O' || ans[i] == 'w' || ans[i] == 'W')
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    (flag)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    
    
    return 0;
}
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// string remove_duplicate(string s, int n)
// {
//     unordered_map<char,int> um;
//     string ans = "";
//     for (int i = 0; i < n; i++)
//     {
//         if (um.find(s[i]) == um.end())
//         {
//             ans.push_back(s[i]);
//             um[s[i]]++;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;
//     cin>>n;
//     string s;
//     cin>>s;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if(toupper(s[i]))
//         {
//             s[i] = tolower(s[i]);
//         }
//     }
//     // cout<<s;
//     // cout<<remove_duplicate(s,n);
//     string ans,ans1 = "meow";
//     ans = remove_duplicate(s,n);
//     if(ans == ans1) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     }
//     return 0;
// }