#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {1,1,2,3,5,7,9};
    vector<int>arr1 = {1,2,3,6,7,8,9};
    vector<int>ans;
    int n = arr.size();
    int n1 = arr1.size();
    int i=0;
    int j=0;
    while(i < n && j < n1)
    {
   if(arr[i] == arr1[j])
   {
       ans.push_back(arr[i]);
       i++;
       j++;
   }
   else if(arr[i] < arr1[j])
   {
    ans.push_back(arr[i]);
    i++;
   }
   else
   {
    ans.push_back(arr1[j]);
    j++;
   }
    }
    while(i < n)
    {
        ans.push_back(arr[i]);
        i++;
    }
  while(j < n1)
  {
    ans.push_back(arr[j]);
    j++;
  }
return 0;
}