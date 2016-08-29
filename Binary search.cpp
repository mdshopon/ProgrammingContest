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
#define swap(x,y) int t;t=x;x=y;y=t
#define PI 3.1416
#define lp 20071027
#define pf printf
#define fr(n,a) for(int i=0;i<n;i++)
#define pb push_back
#define sc1(t) scanf("%d",&t)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sclld(a) scanf("%lld",&a)
#define scstr(l) scanf("%[^\n]",l)
#define make(a,d) memset(a,d,sizeof(a))
#define lld long long int
//***********************************main function from here****************************//

int main()
{
    int a[5]={1,4,7,8,20};
    int f=0,l=4,s=5;
    int m=(f+l)/2;
    while(f<l)
    {
        if(a[m]<s)
        {
            l=m-1;
        }
        if(a[m]>s)
        {
            f=m+1;
        }
        if(a[m]==s)
        {
            break;
        }
    }
    return 0;
}
