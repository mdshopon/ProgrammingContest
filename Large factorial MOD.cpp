#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
long long int N=4; //your input n
long long int M; //your input m
long long int ans=1LL%M;
    //long long int M;
while(scanf("%lld",&M)==1)
{

for(int i=2;i<=N;i++) {

	ans=((i%M)*(ans%M))%M;

}

printf("answer: %lld\n",ans);
}
}
