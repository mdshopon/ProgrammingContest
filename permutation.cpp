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
#define swap(x,y) int t;t=x;x=y;y=t
#define PI 3.1416
#define lp 20071027
#define pf printf
#define fr(n,a) for(int i=0;i<n;i++)
#define pb push_back
#define sc1(t) scanf("%d",&t)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define make(a,d) memset(a,d,sizeof(a))
//***********************************main function from here****************************//
int combinationUtil(int arr[], int data[], int start, int end, int index, int z,int l,int r,int x);
int printCombination(int arr[], int n, int z,int l,int r,int x)
{
    int data[z];
    int k=combinationUtil(arr, data,0,n-1,0,z,l,r,x);
    return k;
}
int combinationUtil(int arr[], int data[], int start, int end, int index, int z, int l,int r,int x)
{
    pf("ddd\n");
    int sum=0,c=0;
    if (index == z)
    {

        for (int j=0; j<z; j++)
        {
                sum+=data[j];
                pf("%d ",data[j]);
        }
       // pf("\n%d\n",sum);
        if(data[z-1]-data[0]>=x && sum>=l && sum<=r)
        {
            c=1;
        }
        return c;
    }

    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, z,l,r,x);
    }

}


int main()
{
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0,z=2;

    while(z<=n)
    {
    int l=printCombination(a,n,z,l,r,x);
    sum+=l;
    z++;
    }
    printf("%d\n",l);
}
