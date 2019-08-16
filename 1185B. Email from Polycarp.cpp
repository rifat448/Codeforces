#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    string s,t;
    cin>>n;
    while(n--){
        cin>>s;
        cin>>t;
        ll c=1,k=0,f=0;
        if(t.size()>=s.size()){
        for(ll i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                for(ll j=k;j<t.size();j++){
                    if(s[i-1]==t[j]) c--;
                    else {k=j;break;}
                }
                if(c>0){cout<<"NO"<<endl;f=1; break;}
                c=1;
            }
            else{
                c++;
            }
        }
        if(!f){
        for(ll i=k;i<t.size();i++){
            if(s[s.size()-1]!=t[i]) {cout<<"NO"<<endl; f=1; break;}
        }
        if(!f){
        for(ll i=t.size()-1;i>=1;i--){
            if(t[i]!=t[i-1]){ if(c>1) {cout<<"NO"<<endl; f=1; break;}}
            else c--;
        }
        }
        if(!f) cout<<"YES"<<endl;
        }
        }
        else cout<<"NO"<<endl;

    }
}
