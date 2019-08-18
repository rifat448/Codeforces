#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    bool f=0;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0) f=1;
    }
    if(f) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}
