#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,2,2,2,4,4,5};
    int n = arr.size();
  // 1,2,2,4,4,5,5,6,1
  int i=0;
  for(int j=1;j<n;j++)
  {
    if(arr[j] != arr[i])
    {
        arr[i+1] = arr[j];
        i++;
    }
  }
}