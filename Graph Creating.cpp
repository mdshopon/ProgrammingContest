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
//***********************************main function from here****************************//

vector<int>edg[MAX];
vector<int>cost[MAX];
int in[MAX];
int out[MAX];


int main()
{
    int node,edge,ct;
    sc2(node,edge);
    make(in,0);
    make(out,0);
    int c1,c2;
    for(int i=1;i<=edge;i++)
    {
        sc2(c1,c2);
        edg[c1].push_back(c2);
        edg[c2].push_back(c1);
        sc1(ct);
        cost[c1].push_back(ct);
        //in[c2]++;
        //out[c1]++;
    }
    for(int i=1;i<=node;i++)
    {
        siz=edg[i].size();
        pf("%d->",i);
        for(int j=0;j<siz;j++)
        {
            pf("%d ",edg[i][j]);

        }
        pf("\n");
    }
    return 0;
}

