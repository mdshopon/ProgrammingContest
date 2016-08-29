#include<iostream>
using namespace std;
#include<vector>
#include<cstdio>
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD)
{
    long long x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}

/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long InverseEuler(int n, int MOD)
{
    return pow(n,MOD-2,MOD);
}

long long C(int n, int MOD)
{
    vector<long long> f(n + 1,1);
    for (int i=2; i<=n;i++)
    {
        f[i]= (f[i-1]*i) % MOD;
    }
    return ((InverseEuler(f[n],MOD)));
}

int main()
{
    int n,r,p;
    while (scanf("%d%d",&n,&p))
    {
        printf("%lld\n",C(n,p));
    }
}
