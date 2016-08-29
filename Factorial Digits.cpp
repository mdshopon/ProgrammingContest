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
#define MAX 1000000
#define fmax(a,b) ((a>b)?a:b)
#define fmin(a,b) ((a<b)?a:b)
#define PI 3.1416
#define lp 20071027
#define pf printf
#define pb push_back
#define sc1(t) scanf("%d",&t)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define make(a,d) memset(a,d,sizeof(a))
//***********************************main function from here****************************//
int main()
{
    long int m;
    double  sum=0;
    scanf("%ld",&m);
    for(int i=1;i<=m;i++)
    {
        sum=sum+log10(i);
    }
    printf("%lld",(long long int)sum+1);
    return 0;
}
