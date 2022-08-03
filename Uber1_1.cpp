void solve(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;++i)cin>>v[i];
reverse(v.begin(),v.end());
__int128 x=0;
for(int i=0;i<n;++i){
    if(v[i]==false) val=1;
    else val=0;
x=(2*x+val);
}
if(x==0){
cout<<0<<'\n';
return;
}
while(x>0){
int z=(int)(x%6);
cout<<z<<" ";
x/=6;
}
cout<<'\n';
return;
}

int main() {
int t;
cin >> t;
while (t--) {
solve();
}
return 0;
}