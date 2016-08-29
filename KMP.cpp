//*********************SHOPON(CODEHEAD)- UNIVERSITY OF ASIA PACIFIC *************************//
//*************************************UAP_BRAINBONE****************************************//
//************************************Header Files*****************************************//
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<cctype>
#include<list>
#include<map>
using namespace std;
//************************************Macros*********************************************//
#define MAX 100000
#define fmax(a,b) ((a>b)?a:b)
#define fmin(a,b) ((a<b)?a:b)
#define swap(x,y) int t;t=x;x=y;y=t
#define PI 3.1416
#define lp 20071027
#define pf printf
#define fr(n,a) for(int i=0;i<n;i++)
#define pb push_back
#define sc1(t) scanf("%d",&t)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sclld(a) scanf("%lld",&a)
#define scstr(l) scanf("%[^\n]",l)
#define make(a,d) memset(a,d,sizeof(a))
#define lld long long int
//***********************************main function from here****************************//
using namespace std;
char TXT[10000000],ptr[10000000];
vector<int> Match_position;
vector<int> compute_prefix(const char *p)
{
    int m=strlen(p+1);
    vector<int> prefix(m+1);
    prefix[1]=0;
    int k=0;
    for(int i=2; i<=m; i++)
    {
        while(k>0 and p[k+1]!=p[i])k=prefix[k];
        if(p[k+1]==p[i])k=k+1;
        prefix[i]=k;
    }
    return prefix;
}
vector<int> KMP_match(const char *txt,const char *ptrn)
{
    int n=strlen(txt+1);
    int m=strlen(ptrn+1);
    vector<int> Prefix=compute_prefix(ptrn);
    vector<int>Match_position;
    int q=0;
    for(int i=1; i<=n; i++)
    {
        while(q>0 and ptrn[q+1]!=txt[i])q=Prefix[q];
        if(ptrn[q+1]==txt[i])q=q+1;
        if(q==m)
        {
            Match_position.push_back(i-m);
            q=Prefix[q];
        }
    }
    return Match_position;
}
int main()
{
    int cases;
    sc1(cases);
   // scanf("\r");
    for(int z=1;z<=cases;z++)
    {
        int n;
        scanf("%d",&n);
        scanf("\r");
        int count=0;
        scanf("%s",TXT+1);
        ptr[1]='W',ptr[2]='H',ptr[3]='Y',ptr[4]='I',ptr[5]='I',ptr[6]='T';
        vector<int> Match_position=KMP_match(TXT,ptr);
        for(int i=0; i<Match_position.size(); i++)
        {
           // if(!i) count++;
             if(!i)count++;
            else count++;
        }

      //  printf("%d %d\n",strlen(TXT+1),count);
        string s="",S="WHYIIT";
        for(int i=strlen(TXT+1)-4;i<=strlen(TXT+1);i++)
        {
            s+=TXT[i];
        }
        if(s==S && TXT[1]=='T')
            count++;
        s="";
        for(int i=strlen(TXT+1)-3;i<=strlen(TXT+1);i++)
        {
            s+=TXT[i];
        }

        if(s=="WHYI" && TXT[1]=='I' && TXT[2]=='T')
            count++;
        s="";
        for(int i=strlen(TXT+1)-2;i<=strlen(TXT+1);i++)
        {
            s+=TXT[i];
        }

        if(s=="WHY" && TXT[1]=='I' && TXT[2]=='I' && TXT[3]=='T')
            count++;
        s="";
        for(int i=strlen(TXT+1)-1;i<=strlen(TXT+1);i++)
        {
            s+=TXT[i];
        }

        if(s=="WH" && TXT[1]=='Y' && TXT[2]=='I' && TXT[3]=='I' && TXT[4]=='T')
            count++;


        if(TXT[strlen(TXT+1)]=='W' && TXT[1]=='H' && TXT[2]=='Y' && TXT[3]=='I' && TXT[4]=='I' && TXT[5]=='T')
            count++;



        pf("%d\n",count);
    }
    return 0;
}
