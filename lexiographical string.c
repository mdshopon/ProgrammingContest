#include <stdlib.h>
//#include<iostream.h>
#include<string.h>
int main (void)
{
    char string[128], temp;
    int n, i, j;

    printf("\nEnter string: ");
    gets(string);

    n = strlen(string);

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (string[i] > string[j])
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    printf("\n%s", string);
    printf("\n");
    return 0;
}
