#include<bits/stdc++.h>
#define ll long long

using namespace std;

int mark[26];

int main()
{
    vector<pair<int,int> >ab,ba;
    string s;
    cin>>s;
    int f=0,g=0;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B') { g=1; f=i+2; break;}
    }

    if(g==1){
    for(int i=f;i<s.length()-1;i++)
    {
        if(s[i]=='B'&&s[i+1]=='A') {cout<<"YES"<<endl; return 0;}
    }
    }

    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]=='B'&&s[i+1]=='A') {g=2; f=i+2; break;}
    }

    if(g==2){
    for(int i=f;i<s.length()-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B') {cout<<"YES"<<endl; return 0;}
    }
    }

    cout<<"NO"<<endl;

}
