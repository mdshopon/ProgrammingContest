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

long long int gcd(long long int a, long long int b) { // assuming a >= b
  while (true) {
    int remainder = a % b;
    if (remainder == 0) {
      return b;
    }
    a = b; // a takes the bigger side
    b = remainder; // b takes the smaller side
  }
}

long long int lcm(long long int a, long long int b) {
  return a * b / gcd(a, b);
}
int main()
{
    int k=lcm(12,5);
    printf("%d",k);
    return 0;
}
