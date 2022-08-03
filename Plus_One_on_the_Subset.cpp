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
ll arr_size;    
cin>>arr_size;
vector<ll> arr;
ll maxi= INT_MIN;
ll mini=INT_MAX;
    for(ll i=0;i<arr_size;i++)
    {   ll elem;
        cin>>elem;
        arr.push_back(elem);

        maxi=max(maxi,elem);
        mini=min(mini,elem);

        
    }

cout<<maxi-mini<<endl;



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