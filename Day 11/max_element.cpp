#include<vector>
#include <iostream>
using namespace std;

int main()
{
    int max;
    int n;
    cin>>n;
    vector<int>v;
  for(int i =0;i<n;i++)
  {
      int x;
      cin>>x;
      v.push_back(x);
  }
  
  for(int val: v)
  {
      cout<< val<<" ";
  }
  
  max = v[0];
  int index = 0;
  
  for(int i=0;i<n;i++)
  {
      if(v[i]<v[i+1])
      max = v[i+1];
      index = i+1;
  }
  
  cout<<max<<endl;
  cout<<index<<endl;
  return 0;
}