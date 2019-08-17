#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m,k,x,f=0;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            x=max(0,a[i+1]-k);
            m=m+(a[i]-x);
        }
        else{
            if(a[i+1]-a[i]<=k){
                x=max(0,a[i+1]-k);
                m=m+(a[i]-x);
            }
            else{
                if(abs(k-(a[i+1]-a[i]))<=m){
                    m=m-abs(k-(a[i+1]-a[i]));
                }
                else{
                    f=1;
                    break;
                }
            }
        }
    }
    if(f) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
}
