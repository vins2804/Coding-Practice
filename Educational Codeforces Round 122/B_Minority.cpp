//#include <bits/stdc++.h>
#include<iostream>
#include <utility>
#include <algorithm>
#include<vector>


using namespace std;

#define ll                     long long int
#define ld                     long double
#define endl                   '\n'
#define fast_io               ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);



void solve()
{   
    string s;
    cin>>s;
    //ll num = stoi(mynum);
   
    ll n=s.length();
    ll zeros=0;
    ll ones=0;
    
    ll ans=0;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='0')
      {
          zeros++;
      }else if(s[i]=='1')
      {
          ones++;
      }
            if(zeros!=ones)
            {
                ans=min(zeros,ones);
            }

    }
   
    

    cout<<ans<<endl;
    

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