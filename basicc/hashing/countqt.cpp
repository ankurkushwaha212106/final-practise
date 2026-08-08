#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,2,2,3,4,5};
  int hash[13] = {0};
  int n = arr.size();
  for(int i=0;i<n;i++)
  {
    hash[arr[i]] += 1;
  }
  for(int i=0;i<n;i++)
  {
    if(hash[i] > 0)
    {
    cout<< i <<" "<<hash[i]<<endl;
  }
}
    return 0;
}