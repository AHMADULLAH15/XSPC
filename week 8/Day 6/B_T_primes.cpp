#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
bool Prime(long long n) 
{
    if (n == 1) 
    {
        return false;
    }

    for (long long i = 2;i * i <= n;i++) 
    {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool PerfectSquare(long long n)
{
    long long x = sqrtl(n);
    return (x * x) == n;
}

int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0;i < n;i++) 
    {
        cin >> a[i];
    }

    for (int i = 0;i < n;i++) 
    {
        if (Prime(sqrtl(a[i])) && PerfectSquare(a[i])) 
        {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}