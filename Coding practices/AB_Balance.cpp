#include<iostream>
using namespace std;

void solve(string s)
{   int ab,ba;
    ab=ba=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='a' && s[i+1]=='b')
        {
            ab++;
        }else if(s[i]=='b' && s[i+1]=='a')
        {
            ba++;
        }
    }
    if(ab==ba)
    {
        cout<<s<<endl;
        return;
    }else if(ab>ba)
    {
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='b')
            {
                s[i]='a';
                break;
            }
        }
        cout<<s<<endl;
        return ;
    }else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                s[i]='a';
                break;
            }
        }
        cout<<s<<endl;
        return ;
    }
}
int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {   
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}