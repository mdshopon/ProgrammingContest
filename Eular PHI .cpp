#include<iostream>
#include<cmath>
using namespace std;

long long int phi(long long x)
 {
   long long int ret = 1,i,pow;
   for (i = 2; x != 1; i++)
   {
     pow = 1;
     if(i>sqrt(x))break;
     while (!(x%i))
     {
       x /= i;
       pow *= i;
     }
     ret *= (pow - (pow/i));
    }
    if(x!=1)ret*=(x-1);
    return ret;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
           int n;
           cin>>n;
           cout<<phi(n)<<endl;
    }
    return 0;
}
