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
    ll num;
    cin>>num;
    
    if(num%7==0)
    {
        cout<<num<<endl;
    }else{
       ll k=num%7;
       ll x=7-k;
       if(num%10>=7)
       {
           cout<<num-k<<endl;
       }else if(num%10<=3)
       {
           cout<<num+x<<endl;
       }else{
           ll z=num%10;
           if(z>=k){
           
               cout<<num-k<<endl;
           }else{
               cout<<num+x<<endl;
           }
       }

        }
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