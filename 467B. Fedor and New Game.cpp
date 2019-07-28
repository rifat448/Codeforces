#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n,m,k,x;
    cin>>n>>m>>k;

    vector<char> v[m+1];

    for(int i=0;i<=m;i++){
        cin>>x;
        while(x>=1){
            int y=x%2;
            char z=y+48;
            v[i].push_back(z);
            x/=2;
        }
    }

    ll ans=0;


    for(int i=0;i<m;i++){
            ll cnt=0;
        ll l=min(v[i].size(),v[m].size());
        for(int j=0;j<l;j++){
            if(v[i][j]!=v[m][j]) cnt++;
        }
        if(l==v[i].size()){
            for(int j=l;j<v[m].size();j++){
                if(v[m][j]=='1') cnt++;
            }
        }
        if(l==v[m].size()){
            for(int j=l;j<v[i].size();j++){
                if(v[i][j]=='1') cnt++;
            }
        }

        if(cnt<=k) ans++;
    }
    cout<<ans<<endl;

}
