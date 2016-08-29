//*********************SHOPON(CODEHEAD)- UNIVERSITY OF ASIA PACIFIC *************************//
//*************************************UAP_BRAINBONE****************************************//
//************************************Header Files*****************************************//
#include <iostream>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <iterator>
#include <map>

using namespace std;
//************************************Macros*********************************************//
#define MAX 1000000
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
#define debug(a, i) printf(#a "[%d] = %d\n", i, a[i]);

//******************************************Checkers**********************************************//
bool isUpperCase(char c){return c>='A' && c<='Z';}
bool isLowerCase(char c){return c>='a' && c<='z';}
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';}
bool isDigit(char c){return c>='0' && c<='9';}

//****************************************Templates**********************************************//
template<class T> inline bool isPrimeNumber(T n)
{if(n<=1)return false;for (T i=2;i*i<=n;i++) if (n%i==0) return false;return true;}
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}
template<class T>T big_mod(T n,T p,T m){if(p==0)return (T)1;T x=big_mod(n,p/2,m);x=(x*x)%m;if(p&1)x=(x*n)%m;return x;}


//***********************************main function from here****************************//


vector<lld> edge[MAX], cost[MAX];

const lld infinity = 100000000010;
lld path[MAX],path2[MAX];

struct data {
    lld city, dist;
    bool operator < ( const data& p ) const {
        return dist > p.dist;
    }
};
lld d[MAX];
lld dijkstra(lld source, lld destination) {

    for(lld i=0; i<MAX; i++) d[i] = 100000000010;
    //make(d,-1);
    priority_queue<data> q;
    data u, v;
    u.city = source, u.dist = 0;
    q.push( u );
    d[ source ] = 0;

    while( !q.empty() ) {
        u = q.top(); q.pop();
        lld ucost = d[ u.city ];
        for(lld i=0; i<edge[u.city].size(); i++) {
            v.city = edge[u.city][i], v.dist = cost[u.city][i] + ucost;
            if( d[v.city] > v.dist )
            {
                path[v.city]=u.city;
                d[v.city] = v.dist;
                q.push( v );
            }
        }

    }

    return d[ destination ];
}
void printpath(lld source ,lld destination)
{

        lld count=0;
        lld x=path[destination];
        lld xx=x;
        while(x!=source)
        {
            path2[count++]=path[x];
            x=path[x];
        }

        for(lld i=count-1;i>=0;i--)
        {
            cout<<path2[i]<<" ";
        }
        cout<<xx<<" "<<destination;
}
int main(){
    open;
    lld n,e;
    cin>>n>>e;
    for(lld i=0;i<e;i++)
    {
        lld u,v;
        lld w;
        cin>>u>>v>>w;
        edge[u].push_back(v);
        edge[v].pb(u);
        cost[u].push_back(w);
        cost[v].pb(w);
    }
    lld x=dijkstra(4,1);
    if(x==100000000010)
    {
        cout<<-1<<endl;
        //printpath(1,n);
    }
    else
    {
        printf("%lld\n",x);
        printpath(4,1);
    }
    //cout<<dijkstra(1,7 );
}
