//#include <bits/stdc++.h>
#include<iostream>
#include <utility>
#include <algorithm>

using namespace std;

#define ll                     long long
#define ld                     long double
#define endl                   '\n'
#define fast_io               ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);



void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=(2*b-c)/a;
   if((2*b-c)==(a*x) && x>0)\
   {
       cout<<"YES"<<endl;
        return;
   }
   x=(2*b-a)/c;
   if((2*b-a)==(c*x) && x>0){
       cout<<"YES"<<endl;
       return;
   }
   x=((c+a)/2)/b;
   if(((c+a))==(2*b*x) && x>0){
       cout<<"YES"<<endl;
       return;
   }
   cout<<"NO"<<endl;
return;
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