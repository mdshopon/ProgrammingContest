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
//***********************************Work Starts From Here******************************//
 /*
    _i cases,cas=0;
    sc1(cases);
    while(cases--)
    {

    }
*/


int find_divisor(int n){
    int i,ans=1,count=1;
    while(n%2==0)
    {
        n/=2;
        count++;
    }
    ans*=count;
    for(i=3; i*i<=n; i+=2)
    {
        count=1;
        while(n%i==0)
        {
            n/=i;
            count++;
        }
        ans*=count;
    }
    if(n>1)
    {
        ans*=2;
    }
    return ans;
}

int main() {
  //  vector< pair<int,int> >A;
    //pair<int,int> B;
    _i C=0,A[1001],B[1001];

    for(int i=1;i<=1000;i++)
    {
        A[C]=find_divisor(i);
        B[C]=i;
        C++;
    }
    for(int i=0;i<C;i++)
    {
        for(int j=0;j<C-1;j++)
        {
            if(A[j]>=A[j+1])
            {
                if(A[j]==A[j+1])
                {
                    if(B[j]<B[j+1])
                    {
                        swap(A[j],A[j+1]);
                        swap(B[j],B[j+1]);
                    }
                }
                else
                {
                    swap(A[j],A[j+1]);
                    swap(B[j],B[j+1]);
                }
            }

        }
    }
    //sort(A.begin(), A.end(), CMP);
    _i cases,cas=0;
    sc1(cases);
    while(cases--)
    {
        int n;
        sc1(n);
        //cout<<A[n-1]<<" "<<B[n-1]<<endl;
        printcase(++cas,B[n-1]);
    }
    return 0;
}
