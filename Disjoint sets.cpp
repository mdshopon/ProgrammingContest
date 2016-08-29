//************************************Header Files*****************************************//
#include <iostream>
#include <numeric>
#include <sstream>
#include <fstream>
#include<ctype.h>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <iterator>
#include <map>

using namespace std;
#define input() freopen("C:\\Users\\Bad-''CODEHEAD''-Ass\\Desktop\\input.txt","r",stdin);

int p[100000];

int find(int x)
{
    if(p[x]==x)
    return x;

    return p[x]=find(p[x]);
}
void make(int a,int b)
{
    p[find(a)]=find(b);
}

int main()
{
    for(long int i=1;i<=100000;i++)
    {
        p[i]=i;
    }
   // input();
    int cases,X=0,cas=0;
    cin>>cases;
    map<string,int> A;
    while(cases--)
    {

        string a,b;
        cin>>a>>b;
        //cout<<A[a]<<" "<<A[b]<<endl;
        if(A[a]==0){
        A[a]=++X;
        }
        if(A[b]==0){
        A[b]=++X;
        }

        //cout<<find(A[a])<<" "<<find(A[b])<<endl;
        if(find(A[a])==find(A[b]))
        {
            printf("Found in friend list\n");
        }
        else
        {
            make(A[a],A[b]);
            printf("Found by random\n");
        }
    }
    return 0;
}
