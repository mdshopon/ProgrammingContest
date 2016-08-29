#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &v)
{
  for(int i = 0; i<v.size(); i++)
    cout<<v[i]<<" ";
  cout<<endl;
}
int count=0;
 vector<int> current;
int ss( int n, int sum,vector<int> &list)
{
  if( sum == 0 ) { count++; return 0; }

  if( n == 0 ) return 0;

  if( list[n-1] <= sum )
  {
    ss( n-1, sum,list);
    current.push_back(list[n-1]);
    ss( n-1, sum-list[n-1],list);
  }
  else
  {
    ss( n-1, sum,list);
  }
  return count;
}

int main()
{
  vector<int> l;
  int num, temp, sum;
  cin>>num;

  for(int i=0; i<num; i++)
  {
    cin>>temp;
    l.push_back(temp);
  }

  cin>>sum;

  int lo=ss( num, sum,l);
  cout<<lo;
  return 0;
}
