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

struct node
{
	bool endmark;
	node *next[26+1];
	node()
	{
		endmark=false;
		for(int i=0;i<26;i++) next[i]=NULL;
	}
}*root;

void insert(char *str,int len)
{
	node *curr=root;
	for(int i=0;i<len;i++)
	{
		int id=str[i]-'a';
		if(curr->next[id]==NULL)
			curr->next[id]=new node();
		curr=curr->next[id];

	}

	curr->endmark=true;

}
bool search(char *str,int len)
{
	node *curr=root;
	for(int i=0;i<len;i++)
	{
	    int id=str[i]-'a';

		if(curr->next[id]==NULL) return false;
		curr=curr->next[id];

	}
	return curr->endmark;
}
void del(node *cur)
{
      for(int i=0;i<26;i++)
             if(cur->next[i])
                  del(cur->next[i]) ;


         delete(cur) ;
}
int main(){

	puts("ENTER NUMBER OF WORDS");
	root=new node();
	int num_word;
	cin>>num_word;
	for(int i=1;i<=num_word;i++)
	{
		char str[50];
		scanf("%s",str);
		insert(str,strlen(str));
	}
	puts("ENTER NUMBER OF QUERY");
	int query;
	cin>>query;
	for(int i=1;i<=query;i++)
	{
		char str[50];
		scanf("%s",str);
		if(search(str,strlen(str)))	puts("FOUND");
		else puts("NOT FOUND");
	}
	del(root);
	return 0;
}
