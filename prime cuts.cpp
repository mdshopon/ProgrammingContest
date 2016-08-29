//*********************SHOPON(CODEHEAD)- UNIVERSITY OF ASIA PACIFIC *************************//
//*************************************UAP_BRAINBONE****************************************//
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
#define MAX 1000000
#define PI 3.1416
#define lp 1000000007
void check(bool arr[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}
void Sieve(int n,int m)
{
    int b[n];
    b[0]=1;
    int count=1;
    if(n==1)
    {
        printf("%d %d: %d\n\n",n,m,b[0]);
    }
    else
    {
    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));
        for (int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {  b[count]=i+1;
               count++;
                check(arr, i+1, n);
            }
        }

        int l;
        if(count%2==0 && m*2>count)
            {
                printf("%d %d:",n,m);

                    for(int i=0;i<count;i++)
                {

                    printf(" %d",b[i]);

                }

            printf("\n");

        }
        else if(count%2==1 && (m*2)-1>count)
        {
            printf("%d %d:",n,m);
                for(int i=0;i<count;i++)
                {
                    printf(" %d",b[i]);

                }
            printf("\n");

        }

        else
        {
            printf("%d %d:",n,m);

            if(count%2==0)
            {

                l=count-m*2;
                l=l/2;
            }
            else
            {

                l=count-((m*2)-1);
                l=l/2;
            }
            for(int i=l;i<count-l;i++)
            {
                {
                printf(" %d",b[i]);
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}
}
int main()
{
        int x,y;
        while(scanf("%d %d",&x,&y)==2)
        {
        Sieve(x,y);
        }
    return 0;
}
