#include < cstdio >
#include < iostream >
using namespace std;

#define INF 1e9

struct Node {
 int offt;
 int cmax;
} tree[5000];

void update(int n, int b, int e, int i, int j, int val)
{
 if (b>e || i>j || b>j || e

 if (b>=i && e<=j)
 {
  tree[n].offt += val;
  tree[n].cmax += val;
  return;
 }

  update(n*2 , b , (b+e)/2 , i , j , val);
 update(n*2+1 , (b+e)/2 + 1 , e , i , j , val);

  tree[n].cmax = max ( tree[n*2].cmax , tree[n*2+1].cmax ) + tree[n].offt;
}

int query(int n, int b, int e, int i, int j, int offt)
{
 if (b>e || i>j || b>j || e

 if (b>=i && e<=j)
  return tree[n].cmax + offt; //the increment of current node is already added to cmax here (see update function)

  offt += tree[n].offt;
 return max ( query(n*2 , b , (b+e)/2 , i , j, offt) ,
  query(n*2+1 , (b+e)/2 + 1 , e , i , j, offt) );
}

int main()
{
 int tc,x,a,b,v;
 cin >> tc;
 while(tc--)
 {
  cin >> x >> a >> b;
  if ( x == 0 )
  {
   cin >> v;
   update(1,0,999,a,b,v);
  }
  else
   cout << query(1,0,999,a,b,0) << endl;
 }
}
