#include<stdio.h>
long int catalan(int n)
{
    int result=n,i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
        {
            while(n%i==0)

                n=n/i;
                result-=result/i;

        }
        if(n>1)
        result-=result/n;

    return result;

}
int main()
{   int a,x=0;
    while(scanf("%d",&a)==1)
    {

    printf("%ld\n",catalan(a));

    }
    return 0;
}
