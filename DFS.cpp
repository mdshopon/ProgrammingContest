//*********************SHOPON(CODEHEAD)- UNIVERSITY OF ASIA PACIFIC *************************//
//******************************************************************************************//
//************************************Header Files*****************************************//

#include <iostream>
#include <numeric>
#include <sstream>
#include <fstream>
#include<ctype.h>
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
//****************************************************************************************//
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
#define input() freopen("C:\\Users\\Bad-''CODEHEAD''-Ass\\Desktop\\input.txt","r",stdin);
#define write freopen("C:\\Users\\Bad-''CODEHEAD''-Ass\\Desktop\\output.txt","w",stdout);
#define pf printf
#define REP(n) for(int i=0;i<n;i++)
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
#define _i int
const lld INF = 0x7fffffff;
//*************************************************************************************************//
//******************************************Checkers**********************************************//
bool isUpperCase(char c){return c>='A' && c<='Z';}
bool isLowerCase(char c){return c>='a' && c<='z';}
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';}
bool isDigit(char c){return c>='0' && c<='9';}

//************************************************************************************************//
//****************************************Templates**********************************************//
template<class T> inline bool isPrimeNumber(T n)
{if(n<=1)return false;for (T i=2;i*i<=n;i++) if (n%i==0) return false;return true;}
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}
template<class T>T big_mod(T n,T p,T m){if(p==0)return (T)1;T x=big_mod(n,p/2,m);x=(x*x)%m;if(p&1)x=(x*n)%m;return x;}
template <class T> inline T mod_inverse(T a, T M){return BM(a, M - 2, M);}
template <class T>T stringtonumber ( const string &Text ){istringstream ss(Text);T result;return ss >> result ? result : 0;}
//*************************************************************************************************//
//************************************Bit Works***************************************************//
int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
//***************************************************************************************//
//**********************************Work Starts From Here*******************************//
 /*
    _i cases,cas=0;
    sc1(cases);
    while(cases--)
    {

    }
*/
vector<int> adj[100]; // eitate pura graph ase
int edge_id[100];// eitate ami edge count korbo
int vis[100]; // eita diya node visit korar hishab rakhbo
void dfs(int s,int n)// S hoitese kon node thika shuru korbo , ar n hoitese amar node shongkha
{
    for(int i = 0; i < n; i++) edge_id[i] = vis[i] = 0; // Visited shobaire 0 banay dilam , tar mane kono tai visited na , edge_id er value 0 kora mane hoitese je prottekta node thika je koyta edge gese oita ami count korbo shamne . tai 0 banay nilam ! ami 0 thika shuru korbo jotokhon na amar oi specific node er edge shesh hobe
    stack<int> S;
    S.push(s); // Jei khan thika shuru korbo oita ke stack e push korlam
    while(1)
    {
        int u = S.top(); // stack e bortomane je top e ase tare u e nilam
        S.pop(); // jeitare nisi oitare pop koira baire falay disi
        while(edge_id[u] < adj[u].size()) // edge_id[u]=0 ei karonei korsilam . adj[u].size() mane hoitese je u thika koyta edge gese . ekhon ami while loop ta chalabo adj[u] er size porjonto , edge_id[u] prothome , prottekbar 1 koira barabo , loop shesh hobe jokhon edge_id ar adj.size() shoman hoya jabe
        {
            int v = adj[u][edge_id[u]]; // edge_id[u]=0,1,2,3 < adj[u].size() , dhori u er value 2 , taile 2 node thika [2][0] , [2][1] , [2][2] .... ei edge gula count hobe
            edge_id[u]++; // edge_id er size baraitesi prottekbar 1 koira !
            if(vis[v] == 0) // jodi ei node age visit na koira thaki taile ei node niya kaj korbo
            {
                vis[v] = 1; // visited koira dilam .
                S.push(u); // stack e push korlam  , eita na korleo hobe important na .
                S.push(v); // current node take ami push korlam stack
                break;
            }
        }
    }
}
int main() {


    return 0;
}
