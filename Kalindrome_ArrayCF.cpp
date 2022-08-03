//#include <bits/stdc++.h>
#include<iostream>
#include <utility>
// #include <algorithm>

using namespace std;

#define ll long long
#define ld                     long double
#define endl                   '\n'
#define fast_io               ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

const int xn = 2e5 + 10;
ll a[xn];
ll b[xn];
bool ans;
ll m;
ll no_elem;
void check(int x)
{
    m=0;
    for(int i=0;i<no_elem;i++)
    {   
        if(a[i]!=a[no_elem-i-1])
            b[m++]=a[i];
    }

    for(int i=0;i<m;i++)
    {
        if(a[i]!=a[no_elem-i-1])
            {
                return;
            }
    }
    ans=false;
}

void solve()
{
    
    cin>>no_elem;
    
    for(int i=0;i<no_elem;i++)
        cin>>a[i];

    for(int i=0;i<no_elem;i++)
    {
        if(a[i]!=a[no_elem-i-1])
          {   
               ans=false;
               check(a[i]);
               check(a[no_elem-i-1]);
               break;
          }     
    }    
     if(ans)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
}
int main()
{
    fast_io;
    ll test_cases;
    cin>>test_cases;
    while(test_cases--)
    {   

        solve();
    }
    return 0;
}