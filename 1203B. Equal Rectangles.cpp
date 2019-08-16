#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n,f=0;
        cin>>n;
        int a[4*n];
        for(int i=0;i<4*n;i++){
            cin>>a[i];
        }
        sort(a,a+(4*n));
        long long area=a[0]*a[4*n-1];
        for(int i=0,j=4*n-1;i<2*n;i+=2,j-=2){
            if(a[i]!=a[i+1]) {f=1; break;}
            if(a[j]!=a[j-1]) {f=1;break; }
            if(a[j]*a[i]!=area){f=1; break;}
        }
        if(!f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

