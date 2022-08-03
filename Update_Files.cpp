//#include <bits/stdc++.h>
#include<iostream>
#include <utility>
#include <iomanip>
#include <algorithm>

using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define FORd(i, a, b) for(int i = (b)-1; i >= (a); i--)
typedef pair<int, int> pii;
typedef pair<ll, ll>  pll;



void solve()
{   ll n,k;
    cin>>n>>k;
    ll total=1;
    ll ans=0;
    while(total<n)
    {
        if(total<k)
        {
            total+=total;
            ans++;
        }else {
            ll req=n-total;
            if(req%k==0) {ans+=(req/k);}
            else {
                ans+=(req/k);
                ans++;
            }
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
 

    ll test_cases;
    cin>>test_cases;
    while(test_cases--)
    {   

        solve();
    }
    return 0;
}