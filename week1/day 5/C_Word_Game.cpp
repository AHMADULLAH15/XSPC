#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s1,s2,s3;
    // cin>>s1>>s2>>s3;
    map<string,int> m1;
    map<string,int> m2;
    map<string,int> m3;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,s1);
        // cin.ignore();
        getline(cin,s2);
        // cin.ignore();
        getline(cin,s3);
        // cin.ignore();
        m1[s1]++;
        m2[s2]++;
        m3[s3]++;
    }
    // cout<<s1<<endl<<s2<<endl<<s3<<endl; 
    for(auto a : m1) cout<<a.first<<" "<<a.second<<endl;
    for(auto b : m2) cout<<b.first<<" "<<b.second;
    return 0;
}