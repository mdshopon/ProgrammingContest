#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    if(v.size()==7){
        sort(v.begin(),v.end());
  for(int i = 0; i<v.size(); i++)
    cout<<v[i]<<endl;
    }
}

void ss(vector<int> &list, int n, vector<int> current, int sum)
{
  if( sum == 0 ) { printVector(current); return; }

  if( n == 0 ) return;

  if( list[n-1] <= sum )
  {
    ss(list, n-1, current, sum);
    current.push_back(list[n-1]);
    ss(list, n-1, current, sum-list[n-1]);
  }
  else
  {
    ss(list, n-1, current, sum);
  }
}

int main()
{
  vector<int> l,curr;
  int num=5, temp, sum;
  for(int i=0; i<num; i++)
  {
    cin>>temp;
    l.push_back(temp);
  }

  sum=10;

  ss(l, num, curr, sum);

  return 0;
}
