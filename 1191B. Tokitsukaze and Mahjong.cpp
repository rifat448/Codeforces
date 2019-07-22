#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    int m=0,p=0,s=0,ans1=2,ans2=2,ans3=2;
    vector<char>v,x;
    if(a==b&&b==c) {cout<<0<<endl; return 0;}
        v.pb(a[1]);
        v.pb(b[1]);
        v.pb(c[1]);
        for(int i=0;i<v.size();i++){
            if(v[i]=='m') m++;
            else if(v[i]=='p') p++;
            else s++;
        }
        if(a==b||a==c||b==c){cout<<1<<endl; return 0;}
        if(m>1)
        {
            if(a[1]=='m') x.pb(a[0]);
            if(b[1]=='m') x.pb(b[0]);
            if(c[1]=='m') x.pb(c[0]);
            sort(x.begin(),x.end());
            for(int i=0;i<x.size()-1;i++)
            {
                if(x[i]+1==x[i+1]) ans1--;
                else if(x[i]+2==x[i+1]){cout<<1<<endl; return 0;}
            }
        }
        else if(p>1)
        {
            if(a[1]=='p') x.pb(a[0]);
            if(b[1]=='p') x.pb(b[0]);
            if(c[1]=='p') x.pb(c[0]);
            sort(x.begin(),x.end());
            for(int i=0;i<x.size()-1;i++)
            {
                if(x[i]+1==x[i+1]) ans2--;
                 else if(x[i]+2==x[i+1]){cout<<1<<endl; return 0;}
            }
        }
        else if(s>1)
        {
            if(a[1]=='s') x.pb(a[0]);
            if(b[1]=='s') x.pb(b[0]);
            if(c[1]=='s') x.pb(c[0]);
            sort(x.begin(),x.end());
            for(int i=0;i<x.size()-1;i++)
            {
                if(x[i]+1==x[i+1]) ans3--;
                 else if(x[i]+2==x[i+1]){cout<<1<<endl; return 0;}
            }
        }
        cout<<min(ans1,min(ans2,ans3))<<endl; return 0;

}
