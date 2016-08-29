#include<bits/stdc++.h>
using namespace std;
bool ison(int i,int x)
{
 if((i>>x) & 1)return true;
 return false;
}
int main()
{
    int cases,cas=0;
    scanf("%d",&cases);
    while(cases--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

        if(n%2==1)
        {
            printf("Case %d: No\n",++cas);
        }
        else
        {
            int sumarr1[(1<<n)-1];
            int sumarr2[(1<<n)-1];
            memset(sumarr1,0,sizeof(sumarr1));
            memset(sumarr2,0,sizeof(sumarr2));
            int index=0;
            vector<int>v1[(1<<n)-1];
            vector<int>v2[(1<<n)-1];

            for(int i=1;i<(1<<n);i++)
            {
               for(int j=0;j<n;j++)
               {
                  if(ison(i,j))
                  {
                     sumarr1[index]+=a[j];
                     v1[index].push_back(a[j]);
                  }
                  else
                  {
                     sumarr2[index]+=a[j];
                     v2[index].push_back(a[j]);
                  }
               }index++;
            }
            int ans=INT_MAX;
            int ii;
            for(int i=0;i<index;i++)
            {
               if(abs(sumarr1[i]-sumarr2[i])<ans)
               {
                  ii=i;
                  ans=abs(sumarr1[i]-sumarr2[i]);
               }
            }


            if(ans==0)
            {
                printf("Case %d: Yes\n",++cas);
            }
            else
            {
                printf("Case %d: No\n",++cas);
            }
        }
    }
}
