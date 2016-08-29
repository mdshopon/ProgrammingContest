//*********************SHOPON(CODEHEAD)- UNIVERSITY OF ASIA PACIFIC *************************//
//*************************************UAP_BRAINBONE****************************************//
//************************************Header Files*****************************************//
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<cctype>
#include<list>
#include<map>
using namespace std;
//************************************Macros*********************************************//
#define MAX 100000
#define fmax(a,b) ((a>b)?a:b)
#define fmin(a,b) ((a<b)?a:b)
#define pii pair< int, int >
#define FOR(i,A,B) for(int i = (A); i < (B); ++i)
#define swap(x,y) int t;t=x;x=y;y=t
#define sqr(num) ((num)*(num))
#define PI 3.1415926535897
#define pitr (2*acos(0))
#define lp 20071027
#define open freopen("C:\\Users\\Bad-''CODEHEAD''-Ass\\Desktop\\input.txt","r",stdin);
#define pf printf
#define fr(n) for(int i=0;i<n;i++)
#define pb push_back
#define sc1(t) scanf("%d",&t)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc164(t) scanf("%lld",&t)
#define sc264(a,b) scanf("%lld%lld",&a,&b)
#define sc364(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define scstr(l) scanf("%[^\n]",l)
#define make(a,d) memset(a,d,sizeof(a))
#define lld long long int
#define print(x) printf("%d\n",x)
#define print64(x) printf("%lld\n",x)
#define printcase(x,n) printf("Case %d: %d\n",x,n)
#define printyn(x,s) printf("Case %d: %s\n",x,s)
//***********************************main function from here****************************//
int w[MAX],c[MAX];
int dp[100][100];
int total;
int unit,weight;

int solve(int ind,int wg)
{
    if(ind==unit+1)
    {
        return 0;
    }
    if(dp[ind][wg]!=-1)
    {
        return dp[ind][wg];
    }
    int pr1=0,pr2=0;
    if(wg+w[ind]<=weight)
    {
        pr1=c[ind]+solve(ind+1,w[ind]+wg);
    }

    pr2=solve(ind+1,wg);

    dp[ind][wg]=fmax(pr1,pr2);

    return dp[ind][wg];
}
int main()
{
    //open;
    int cases;
    sc1(cases);
    while(cases--)
    {
        memset(dp,-1,sizeof(dp));
        sc2(unit,weight);

        for(int i=1;i<=unit;i++)
        {
            sc2(w[i],c[i]);
        }
        pf("%d",solve(1,0));
    }
    return 0;
}
