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
    //5, -10, 6, -2, 4, -10, 1.
    int a[8];
    a[1]=5;
    a[2]=-10;
    a[3]=6;
    a[4]=-2;
    a[5]=4;
    a[6]=-10;
    a[7]=1;
    int s[6];
    s[0]=0;
    int sum=0,max=0;
    for(int j=1;j<=7;j++)
    {
        max=max+a[j];
        if(max<0)
        {
            max=0;
        }
        else if(sum<max)
        {
            sum=max;
        }

    }
    for(int i=1;i<=7;i++)
    {
        pf("%d ",a[i]);
    }
   pf("\n%d",sum);
    return 0;
}
