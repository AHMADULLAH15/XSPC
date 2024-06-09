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
        int a, b, k;
        cin >> a >> b >> k;
        int tem = b;
        int c = 0;
        while (tem > a)
        {
            if (tem % k == 0 && tem / k >= a)
                tem /= k, c++;
            else
            {
                if ((tem / k) < a)
                {
                    c += (tem - a);
                    tem -= (tem - a);
                }
                else
                    c += (tem % k), tem -= (tem % k);
                if (tem <= a)
                    break;
            }
        }

        cout << c <<endl;
    }
    

    return 0;
}