#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
long int result[1000],toi[1000];
    char a[270],b[270],c[270];
    long int i,j,k,lena,lenb,carry,l,temp;
int main()
{

    while(scanf("%s",&a)==1)
    {
        if(strcmp(a,"0")==0)
        {
            break;
        }

        strcpy(b,a);
        strcpy(c,a);
       // int len=strlen(c);
        lena=strlen(a);
        lenb=strlen(b);
        memset(result,0,sizeof(result));
        k=0;
        for(i=lenb-1;i>=0;i--)
        {
            k+=1;
            l=k-1;
            carry=0;
            for(j=lena-1;j>=0;j--)
            {
                l+=1;
                temp=(b[i]-48)*(a[j]-48)+carry+result[l];
                result[l]=temp%10;
                carry=temp/10;
            }
            if(carry>0)
            {
                l+=1;
                result[l]=carry;
            }

        }
        long int count=0,cout=0;
        long int x,y,z;
        long int inti=atoi(c);
        while(inti!=0)
        {
            x=inti%10;
            toi[cout]=x;
            inti/=10;
            cout++;
        }
        /*
        if(strcmp(a,"0")==0 ||strcmp(b,"0")==0 )
            printf("0");
        else
        {
            for(i=l;i>=1;i--)
                printf("%ld",result[i]);
        }

        printf("\n");
        printf("%ld %ld\n",cout,l);
        */
        for(i=1;i<=l;i++)
        {

            printf("%ld %ld\n",result[i],toi[i-1]);
            if(result[i]==toi[i-1])
            {
                count++;
            }

            if(i>cout)
            {
                break;
            }
            cout--;
        }

        if(count>0)
    {
        printf("Automorphic number of %ld-digit.\n",count);
    }
    else
    {
        printf("Not an Automorphic number.\n");
    }
    }
    return 0;
}
