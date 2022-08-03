//#include <bits/stdc++.h>
#include<iostream>
#include <utility>
#include <algorithm>
#include<vector>

using namespace std;

#define ll                     long long
#define ld                     long double
#define endl                   '\n'
#define fast_io               ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);



void solve()
{
    int n;
    cin>>n;
    vector<ll>cnt(n+1,0);
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        while(a>n){a/=2;}

        cnt[a]++;
    }

    bool can=1;

    for(int j=n;j>=1;j--)
    {
        if(cnt[j]==0)
        {
            can=0;
            break;
        }
        while(cnt[j]>1)
        {
            cnt[j/2]++;
            cnt[j]--;
        }
    }
    cout<<(can?"YES\n":"NO\n");
}
int main()
{
    fast_io;

    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {   

        solve();
    }
    return 0;
}