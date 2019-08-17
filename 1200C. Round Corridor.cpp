#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m,t;
    cin>>n>>m>>t;
    ll a[3],g=__gcd(n,m);
    a[1]=n/g;
    a[2]=m/g;

    while(t--){
    	ll x,y,u,v;
    	cin>>x>>y>>u>>v;
    	ll c1=y/a[x]+(y%a[x]!=0);
    	ll c2=v/a[u]+(v%a[u]!=0);
    	if(c1==c2) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
}
