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
#define MAX 120000
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



int main() {
    int n,a[MAX],count;
	make(a,-1);
	sc1(n);
	int v1,v2;
	for (int i=0; i < n; i++) {
		sc2(v1,v2);
		count=0;
		for (int j=1;j*j<=v1;j++) {
			if (v1%j == 0) {
				if (a[j]<i-v2)
					count++;
				if (v1/j!=j && a[v1/j]<i-v2)
					count++;
				a[j]=a[v1/j]=i;
			}
		}
		pf("%d\n",count);
	}
	return 0;
}
