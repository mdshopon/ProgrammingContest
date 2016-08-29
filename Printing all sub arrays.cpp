#include <stdio.h>

/* Prints all the subarrays of length r */

/* @params: a, given array */
/* @params: n, a length */
/* @params: sub, sub array */
/* @params: r, sub length */
/* @params: i, current index of a */
/* @params: j, current index of sub */

void subarray(int a[], int n, int sub[], int r, int i, int j)
{
    if(j == r) /* current index of sub r, print sub */
    {
        int k;

        printf("( ");

        for(k = 0; k < r; k++)
            printf("%d ", sub[k]);

        printf(")\n");
    }
    else
    {
        if(i < n)
        {
            sub[j] = a[i];

            subarray(a, n, sub, r, i + 1, j + 1); /* Include current element */
            subarray(a, n, sub, r, i + 1, j);     /* Override the current element */
        }
    }

}

int main()
{
    int n, r;

    scanf("%d%d", &n, &r);

    int a[n], sub[r];

    int i;

    for(i = 0 ; i < n; ++i)
        scanf("%d", a + i);

    subarray(a, n , sub, r, 0, 0);
}
