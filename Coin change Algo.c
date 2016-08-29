#include<stdio.h>
long int count( long int S[], long int m, long int n )
{
    // If n is 0 then there is 1 solution (do not include any coin)
    if (n == 0)
        return 1;

    // If n is less than 0 then no solution exists
    if (n < 0)
        return 0;

    // If there are no coins and n is greater than 0, then no solution exist
    if (m <=0 && n >= 1)
        return 0;

    // count is sum of solutions (i) including S[m-1] (ii) excluding S[m-1]
    return count( S, m - 1, n ) + count( S, m, n-S[m-1] );
}

// Driver program to test above function
int main()
{
    long int i, j;
    long int arr[] = {1,2,3,4,5};
    long int m = sizeof(arr)/sizeof(arr[0]);
    long int n;
    while(scanf("%d",&n)==1)
    {
    printf("%ld\n", count(arr, m, n));
    }
    return 0;
}


