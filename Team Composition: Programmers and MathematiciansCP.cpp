//#include <bits/stdc++.h>
#include<iostream>
#include <utility>
#include <algorithm>

using namespace std;

#define ll long long
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define FORd(i, a, b) for(int i = (b)-1; i >= (a); i--)
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

typedef pair<int, int> pii;
typedef pair<ll, ll>  pll;

ll helper(ll a,ll b)
{
    ll max=MAX(a,b);
    ll min=MIN(a,b);
    //ll ans;
    
    ll con1=MIN(min,(max/3));


    ll con2=MIN((min/2),(max/2));
    
    return MAX(con1,con2);
}

void solve()
{   ll a,b;
    cin>>a>>b;
    ll con1,con2;
    ll max=MAX(a,b);
    ll min=MIN(a,b);
    //ll ans;
    
    con1=MIN(min,(max/3));
    ll ans11=max-3*con1;
    ll ans12=min-con1;
            con1=con1+helper(ans11,ans12);

    con2=MIN((min/2),(max/2));
    ll ans21=max-2*con2;
    ll ans22=min-2*con2;
           con2=con2+helper(ans21,ans22);


    cout<<MAX(con1,con2)<<endl;
    return;
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