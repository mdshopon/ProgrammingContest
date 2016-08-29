#include<cstdio>
#define MAX 7490

int coins[] = {1, 5, 10, 25, 50};
unsigned long long int dp[MAX];
int main()
{
    dp[0] = 1;
    for(int i = 0; i<5; i++)
    {
        for(int j = coins[i]; j<MAX; j++)
        {
            dp[j] += dp[j - coins[i]];
        }
    }
    int i;
    while(scanf("%d", &i) == 1)
    {
        printf("%llu\n", dp[i]);
    }
    return 0;
}
