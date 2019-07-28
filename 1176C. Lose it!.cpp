/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**               Md. Rifat Hasan Shaun              **/
/**  Department of Computer Science and Engineering  **/
/**                       IUBAT                      **/
/******************************************************/
/******************************************************/


#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#define     cas                    "Case "
#define     gi(x)                  while(cin>>x)
#define     gi2(x,y)               while(cin>>x>>y)
#define     gi3(x,y,z)             while(cin>>x>>y>>z)
#define     ll                     long long
#define     ull                    unsigned long long
#define     pb(x)                  push_back(x)
#define     loop(i,a,b)            for(int i=a;i<b;++i)
#define     rloop(i,a,b)           for(int i=a-1;i>=b;i--)
#define     pi                     2*acos(0.0)
#define     exit                   return 0
#define     all(v)                 v.begin(),v.end()
#define     mem(a,v)               memset(a,v,sizeof(a))
#define     max2(a,b)              max(a,b)
#define     max3(a,b,c)            max(a,max(b,c))
#define     min2(a,b)              min(a,b)
#define     min3(a,b,c)            min(a,min(b,c))

#define     scan1(a)               scanf("%d",&a)
#define     scan2(a,b)             scanf("%d %d",&a,&b)
#define     scan3(a,b,c)           scanf("%d %d %d",&a,&b,&c)
#define     scanl(a)               scanf("%lld",&a)
#define     scanll(a,b)            scanf("%lld %lld",&a,&b)
#define     scanlll(a,b,c)         scanf("%lld %lld %lld",&a,&b,&c)

#define     print1(a)              printf("%d",a)
#define     print2(a,b)            printf("%d %d",a,b)
#define     print3(a,b,c)          printf("%d %d %d",a,b,c)
#define     printl(a)              printf("%lld",a)
#define     printll(a,b)           printf("%lld %lld",a,b)
#define     printlll(a,b,c)        printf("%lld %lld %lld",a,b,c)

#define     mxa                     900000
#define     lm                     1000000007

using namespace std;
// ll mark[mx];
// ll a[mx];

//************Sieve****************

/*bool mark[10000001];vector<ll> prime;
void seive(){for(int i=2;i<10000001;i++){if(mark[i]==false){prime.pb(i);for(int j=i+i;j<10000001;j+=i)mark[j]=true;}}}*/

//*************Bigmod**************

//ll bigmod(ll a,ll b,ll m){ if(b==0) return 1%m; ll x=bigmod(a,b/2,m); x=(x*x)%m; if(b%2==1) x=(x*a)%m; return x;}

int a[6];

int main()
{
    ll n,x;
    cin>>n;
    loop(i,0,n)
    {
        cin>>x;
        if(x==4) a[0]++;
        if(x==8&&a[0]>a[1]) a[1]++;
        if(x==15&&a[1]>a[2]) a[2]++;
        if(x==16&&a[2]>a[3]) a[3]++;
        if(x==23&&a[3]>a[4]) a[4]++;
        if(x==42&&a[4]>a[5]) a[5]++;
    }
    cout<<n-(a[5]*6)<<endl;
}
//4,8,15,16,23,42 .



/*****************************************************/
/*                 Happy Coding :3)                  */
/*****************************************************/
