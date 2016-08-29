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
#define open freopen("D:\\input.txt","r",stdin);
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
#define printcase(x,n) printf("Case %d: %lld\n",x,n)
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
// A function to print all prime factors of a given number n

lld primeFactors(lld n)
{
        lld count2=1,ans=1,count,flag=0;
        lld P=0;
        lld sum=1;
        while (n%2 == 0)
        {
            //printf("%d ", 2);
            count2++;
            n = n/2;
            P++;
        }
        //if(P>0)
          //  sum*=((pow(2,P+1)-1));


        print64(sum);
        for (lld i = 3; i*i <= n; i = i+2)
        {
            P=0;
            count=1;
            flag=0;
            while (n%i == 0)
            {
               ///printf("%d ", i);
                count++;
                n = n/i;
                flag=1;
                //print(ans);
                P++;
            }
            if(P>0)
                sum*=((pow(i,P+1)-1)/(i-1));
           // (flag==1)?ans*=(count):ans*=1;
            if(flag==1) ans*=count;
        }
        count=1;
        //print(n);
        print64(sum);
        if (n > 2){
                sum*=((pow(n,2)-1)/(n-1));
        count++;
        //'printf ("%d ", n);
        }
        //
        //print(count2);
       // print(count2);

        ans*=count;
          //print(ans);
        return sum;
}

int main()
{
    int cases,cas=0;
    sc1(cases);
    while(cases--)
    {
            lld n;
            scanf("%lld",&n);
            lld m=primeFactors(n);
           printf("Case %d: %lld\n",++cas,m);
    }
    return 0;
}
