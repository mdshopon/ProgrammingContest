#include<stdio.h>
int gcd(int a, int b) { // assuming a >= b
  while (true) {
    int remainder = a % b;
    if (remainder == 0) {
      return b;
    }
    a = b; // a takes the bigger side
    b = remainder; // b takes the smaller side
  }
}
int main()
{
int m,n;
scanf("%d %d",&m,&n);
int x=gcd(5,12);
printf("%d",x);
return 0;
}
