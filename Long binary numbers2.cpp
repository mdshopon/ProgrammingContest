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
int main()
{
    char a[100];
    char b[100];

    gets(b);
    fflush(stdin);
    gets(a);

        long long int binaryNumber1,binaryNumber2,decimalNumber1=0,decimalNumber2=0,j=1,remainder,remainder2;
        long long int d=b[0]-48;
        int l=strlen(a);
        int k=strlen(b);


        for(int i=0;i<l;i++)
        {
            remainder=a[i]-48;
            decimalNumber1=decimalNumber1+remainder*j;
        j=j*2;

        }
        j=1;
        for(int x=0;x<k;x++)
        {
            remainder2=b[x]-48;
            decimalNumber2=decimalNumber2+remainder2*j;
            j=j*2;
        }


     printf("%lld %lld",decimalNumber1,decimalNumber2);


    return 0;
}
