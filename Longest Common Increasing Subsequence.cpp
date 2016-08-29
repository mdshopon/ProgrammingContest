#include<iostream>
using namespace std;
#include<vector>

void LCIS(vector<int> A, vector<int> B)
{
    int N=A.size(),M=B.size(),i,j;
    vector<int> C(M,0);
    vector<int> prev(M,0);
    vector<int> res;

    for (i=0;i<N;i++)
    {
        int cur=0,last=-1;
        for (j=0;j<M;j++)
        {
            if (A[i]==B[j] && cur+1>C[j])
            {
               C[j]=cur+1;
               prev[j]=last;
            }
            if (B[j]<A[i] && cur<C[j])
            {
               cur=C[j];
               last=j;
            }
        }
    }

    int length=0,index=-1;
    for (i=0;i<M;i++)
        if (C[i]>length)
        {
           length=C[i];
           index=i;
        }
    printf("The length of LCIS is %d\n",length);
    if (length>0)
    {
       printf("The LCIS is \n");
       while (index!=-1)
       {
             res.push_back(B[index]);
             index=prev[index];
       }
       reverse(res.begin(),res.end());
       for (i=0;i<length;i++)
           printf("%d%s",res[i],i==length-1?"\n":" ");
    }
}


int main()
{
    int n,m,i;
    scanf ("%d", &n);
    vector<int> A(n,0);
    for (i = 0; i < n; i++)
        scanf ("%d", &A[i]);
    scanf ("%d", &m);
    vector<int> B(m,0);
    for (i = 0; i < m; i++)
        scanf ("%d", &B[i]);
    LCIS(A,B);
}
