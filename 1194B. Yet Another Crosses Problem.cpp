#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int r[n],c[m];
        char x;
        int ans,rs,cs,mi=1000000000;
        memset(a,0,sizeof(a));
        memset(r,0,sizeof(r));
        memset(c,0,sizeof(c));
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++) {cin>>x; if (x=='.') a[j][k]=0; else {a[j][k]=1; c[k]++;r[j]++; }}
        }

        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++) { rs=m-r[j];cs=n-c[k]; ans=rs+cs; if(a[j][k]==0) {ans--;} mi=min(mi,ans);}
        }
        cout<<mi<<endl;
    }

}
