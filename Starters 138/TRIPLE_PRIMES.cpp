#include<iostream>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define loop(i,s,n) for(int i = s; i < n; i++)
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using pbds_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
vector<int> sieve(int n)
{

    int *arr = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            if (i != 2)
                vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
bool isprime(int n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
vector<int> primes(1e5 + 5);
void solve()
{
    int n;
    cin >> n;
    n -= 4;
    if (n < 34)
    {
        cout << "No\n";
        return;
    }
    for (int i : primes)
    {
        int rem = n - (i * i);
        if (rem < 0)
            break;
        int sq = sqrt(rem);
        if (sq * sq == rem)
        {
            if (isprime(sq))
            {
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}
int main()
{
    //Author : AHMAD
    //Never Give UP AHMAD
    ios ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    primes = sieve(1e5 + 5);
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}