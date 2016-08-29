
//*********************SHOPON(CODEHEAD)- UNIVERSITY OF ASIA PACIFIC *************************//
//*************************************************************************************************//
//********* Amar Code Dekhe Lav nai , Majhe Majhe ami i amar code bujhi na *****************//
//*************************************************************************************************//
//************************************Header Files*****************************************//
#include<bits/stdc++.h>

using namespace std;
//*************************************************************************************************//
//**************************************Type_Defs**************************************************//
typedef long long int lld;
typedef unsigned long long int ulld;
typedef int _i;
typedef vector<int> _VINT;
typedef vector<lld> _VLLD;
typedef pair<int,int> _PAIR;
typedef vector<pair<int,int> > vpintint;
typedef vector<pair<string,int> > vpstringint;
typedef map<string,int> stringintmap;
typedef map<int,string> intstringmap;
typedef map<string,string> stringstringmap;
typedef map<int,int> intintmap;

//*********************************************************************************************//
//************************************Macros*********************************************//
#define MAX 100000
#define pii pair< int, int >
#define FOR(i,A,B) for(int i = (A); i < (B); ++i)
#define sqr(num) ((num)*(num))
#define PI 3.1415926535897
#define pitr (2*acos(0))
#define lp 20071027
#define input() freopen("C:\\Users\\Bad-''CODEHEAD''-Ass\\Desktop\\input.txt","r",stdin);
#define output() freopen("C:\\Users\\Bad-''CODEHEAD''-Ass\\Desktop\\output.txt","w",stdout);
//#define input() freopen("/home/codehead/Desktop/input.txt","r",stdin);
//#define output() freopen("/home/codehead/Desktop/output.txt","w",stdout)
#define pf printf
#define REP(n) for(int i=0;i<n;i++)
#define VREP(i,n) for(int (i)=0;i<n;i++)
#define pb push_back
#define sc1(t) scanf("%d",&t)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sc164(t) scanf("%lld",&t)
#define sc264(a,b) scanf("%lld%lld",&a,&b)
#define sc364(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define scstr(l) scanf("%[^\n]",l)
#define make(a,d) memset(a,d,sizeof(a))
#define print(x) printf("%d\n",x)
#define print64(x) printf("%lld\n",x)
#define printcase(x,n) printf("Case %d: %d\n",x,n)
#define printyn(x,s) printf("Case %d: %s\n",x,s)
#define debug(a, i) printf(#a "[%d] = %d\n", i, a[i]);
#define what_is(x) cerr << #x << " is " << x << endl;
#define MOD 1000000007
#define line pf("\n")
const lld INF = 0x7fffffff;

//*************************************************************************************************//
char __INPUT[25];
inline int _I() { scanf("%s",__INPUT); return atoi(__INPUT); }
inline long long int _LLD(){scanf("%s",__INPUT); return atoll(__INPUT);}
//************************************************************************************************//
//****************************************Templates**********************************************//
template<class T> inline bool isPrimeNumber(T n)
{if(n<=1)return false;for (T i=2;i*i<=n;i++) if (n%i==0) return false;return true;}
template<class T>T gcd(T a,T b){return b == 0 ? a : gcd(b, a % b);}
template<typename T>T lcm(T a, T b) {return a / gcd(a,b) * b;}

template<class T>T power(T n,T p){if(p==0)return 1;T x=mpower(n,p/2);x=(x*x);if(p&1)x=(x*n);return x;} ///n to the power p
template <typename T>string NumberToString ( T Number ) {ostringstream ss;ss << Number;return ss.str(); }
_i stringtonumber(string S){
    _i N=1,X=S.size(),L=1;
    N=S[0]-48;
    while(L!=X){
        N=N*10;
        N=N+(S[L]-48);
        L++;
    }
    return N;
}

//*************************************************************************************************//
//************************************Bit Works***************************************************//
int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
//************************************************************************************************//
//*************************************CharCheck*************************************************//
bool isUpperCase(char c){return c>='A' && c<='Z';}
bool isLowerCase(char c){return c>='a' && c<='z';}
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';}
bool isDigit(char c){return c>='0' && c<='9';}

//************************************************************************************************//
//*************************************MOD WORKS*************************************************//
template <class T> inline T bigmod(T p,T e,T M){
    lld ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}

template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

//****************************************************************************************//
//***********************************CASE_INPUT***********************************************//
_i cases,cas=0;
void CAS()
{
    cases=_I();
}
#define CASE() CAS();while(cases--)
//************************************Neccessary Codes*****************************************//
//********************************************************************************************//
/*
    bool PRIME[10000009];
    void primecheck()
    {
        long long i,j,sq=sqrt(10000000);
        for(i=4;i<=10000000;i=i+2)
            PRIME[i]=1;
        for(i=3;i<=sq;i=i+2)
        {
            if(PRIME[i]==0)
            {
                for(j=i*i;j<=10000000;j=j+2*i)
                    PRIME[j]=1;
            }
        }
    }

    bool _SEARCH(int low,int high,int value)
    {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==value) return 1;
            else if(a[mid]<value)
                low=mid+1;
            else
                high=mid-1;
        }
        return 0;
    }

*/
void faltucode(){

}
//***************************************************************************************//
//***********************************Work Starts From Here******************************//

int lcs( string X, string Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1]){
         L[i][j] = L[i-1][j-1] + 1;

       }

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
   return L[m][n];
}

void letsGo()
{
  string X,Y;
  while(getline(cin,X)){
        getline(cin,Y);
      _i m = X.size();
      _i n = Y.size();
      printf("%d\n",lcs( X, Y, m, n ) );
  }
}

int main(){
   // while(1){
    letsGo();
   // faltucode();
   // }
    return 0;

}

