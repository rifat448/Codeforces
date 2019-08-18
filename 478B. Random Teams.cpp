#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,m,x,y,t,maxp,minp;
    cin>>n>>m;
    y=n-m;
    maxp=(y*(y+1))/2;
    x=n/m;
    t=n%m;
    minp=((x*(x-1)/2)*(m-t))+((x*(x+1)/2)*t);
    cout<<minp<<" "<<maxp<<endl;
}
