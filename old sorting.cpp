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
    int cases;
    sc1(cases);
    for(int x=1;x<=cases;x++){
    int n;
    sc1(n);
    int a[n];
    for(int i=1;i<=n;i++){
        sc1(a[i]);
    }
    int swaps=0,temp;
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=i)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(a[j]==i)
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    swaps++;
                }
            }
        }
    }
    pf("Case %d: %d\n",x,swaps);
    }
    return 0;
}
