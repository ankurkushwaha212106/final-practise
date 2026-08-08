#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>arr = {1,0,1,0,2,0,3,0,0};
  int n = arr.size();
  vector<int>ans;
  vector<int>ans1;
  for(int i=0;i<n;i++)
  {
    if(arr[i] != 0)
    {
    ans.push_back(arr[i]);
  }
  else
  {
    ans1.push_back(arr[i]);
  }
}
for(auto x : ans)
{
  cout<< x <<"  ";
}
for(auto x : ans1)
{
  cout<< x <<"  ";
}
return 0;
}