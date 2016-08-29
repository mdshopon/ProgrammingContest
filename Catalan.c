#include<stdio.h>
long int catalan(int n)
{
    if(n==1)
    return 1;
    else
    n=n-1;
    return ((catalan(n)*(2*n+2)*(2*n+1))/((n+1)*(n+2)));

}
int main()
{   int a,x=0;
    while(scanf("%d",&a)==1)
    {

    printf("%ld\n\n",catalan(a));

    }
    return 0;
}
